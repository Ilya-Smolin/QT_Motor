#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPlainTextEdit>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QLabel>
#include <QDebug>

#define BUFF_SIZE  0x8
#define BUF_MASK  (BUFF_SIZE - 1)


uint8_t buffer [BUFF_SIZE];
uint8_t idxIN = 0, idxOUT = 0;

void addElement (uint8_t data){
    buffer[idxIN++] = data;
    idxIN &= BUF_MASK;
}

uint8_t getElement (void){
    uint8_t data = buffer[idxOUT++];
    idxOUT &= BUF_MASK;
    return data;
}

bool _connected = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos)
        ui->comboBox_ports->insertItem(0,info.portName(),0);
    _connected = false;
    ui->label_connection->setText("Disconnected");
    ui->stop_button->setDisabled(true);
    ui->horizontalSlider->setDisabled(true);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start(30);
}

void MainWindow::enable_disable_all (bool tralse)
{

}

MainWindow::~MainWindow()
{
    if (serial->isWritable())
    {
        QByteArray ba;
        ba.resize(2);
        ba[0] = 0; //Stop command
        ba[1] = 0xFE;
        serial->write(ba);
        ui->label_speed->setText("0");
        ui->horizontalSlider->setSliderPosition(0);
    }
    serial->close();
    delete serial;
    delete ui;
}




void MainWindow::on_pushButton_connect_clicked()
{

    if (_connected == false)
    {
        serial = new QSerialPort (this);
        serial->setPortName(ui->comboBox_ports->currentText());
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        serial->open(QIODevice::ReadWrite);

        connect(serial, SIGNAL(readyRead()), this, SLOT(serialRecieved()));

        if (serial->isWritable())
        {
            QByteArray ba;
            ba.resize(2);
            ba[0] = 0xFF; //Reset MC
            ba[1] = 0x68;
            serial->write(ba);
            ui->label_connection->setText("Connected");
            ui->pushButton_connect->setText("Disconnect");
        }
        else
            ui->label_connection->setText("Unable to connect");
    }
    else
    {
        ui->pushButton_connect->setText("Connect");
        ui->horizontalSlider->setSliderPosition(0);
        ui->label_speed->setText("");
        ui->label_current_state->setText("");
        serial->close();
        ui->label_connection->setText("Disconnected");
    }
}


void MainWindow::on_forward_button_clicked()
{
    if (_connected == false)
    {
        ui->label_connection->setText("Connect to move forward");
    }
    else
    {
        if (serial->isWritable())
        {
            QByteArray ba;
            ba.resize(2);
            ba[0] = 1; //Move frwd command
            ba[1] = 0xFE;
            serial->write(ba);
        }
        else
            qDebug()<<"Unable to write to serial";
    }
}


void MainWindow::on_stop_button_clicked()
{
    if (_connected == false)
    {
        ui->label_connection->setText("Connect to stop");
    }
    else
    {
        if (serial->isWritable())
        {
            QByteArray ba;
            ba.resize(2);
            ba[0] = 0; //Stop command
            ba[1] = 0xFE;
            serial->write(ba);
            ui->label_speed->setText("0");
            ui->horizontalSlider->setSliderPosition(0);
        }
        else
            qDebug()<<"Unable to write to serial";
    }
}


void MainWindow::on_reverse_button_clicked()
{
    if (_connected == false)
    {
        ui->label_connection->setText("Connect to reverse");
    }
    else
    {
        if (serial->isWritable())
        {
            QByteArray ba;
            ba.resize(2);
            ba[0] = 2; //Move reverse command
            ba[1] = 0xFE;
            serial->write(ba);
        }
        else
            qDebug()<<"Unable to write to serial";
    }
}



void MainWindow::on_update_ports_clicked()
{
    ui->comboBox_ports->clear();
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos)
        ui->comboBox_ports->insertItem(0,info.portName(),0);
}

void MainWindow::serialRecieved()
{
    /*Заполняем буффер*/
    QByteArray ba;
    ba = serial->readAll();
    for (int i = 0; i <= (int) (sizeof (ba) / sizeof (ba[0])); i++)
       addElement(ba[i]);


    /*Считываем буффер, пока там есть непрочитанные сообщения, если видим кодовое сообщение - анализируем дальше*/
    while (idxIN != idxOUT)
    {
        if (getElement() == 0x66)
        {
            ui->label_current_state->setText(QString::number((int) (buffer[(idxOUT - 3) & BUF_MASK])));
            ui->label_speed->setText(QString::number((int) (buffer[(idxOUT - 2) & BUF_MASK])));
        }

    }

    if (ui->label_current_state->text() == "0" && ui->stop_button->isEnabled())
    {
        ui->forward_button->setDisabled(false);
        ui->stop_button->setDisabled(true);
        ui->reverse_button->setDisabled(false);
        ui->horizontalSlider->setDisabled(true);
        ui->label_connection->setText("We r stopped");
    }
    else if (ui->label_current_state->text() == "1" && ui->forward_button->isEnabled())
    {
        ui->forward_button->setDisabled(true);
        ui->reverse_button->setDisabled(false);
        ui->stop_button->setDisabled(false);
        ui->horizontalSlider->setDisabled(false);
        ui->label_connection->setText("We r moving forward");
    }
    else if (ui->label_current_state->text() == "2" && ui->reverse_button->isEnabled())
    {
        ui->forward_button->setDisabled(false);
        ui->reverse_button->setDisabled(true);
        ui->stop_button->setDisabled(false);
        ui->horizontalSlider->setDisabled(false);
        ui->label_connection->setText("We r in reverse mode");
    }

}


void MainWindow::updateTimer()
{
    if (((ui->label_current_state->text() == "1") |
         (ui->label_current_state->text() == "2")) &&
            (ui->label_speed->text() !=
             QString::number((int) ((100*ui->horizontalSlider->sliderPosition())/252))))
    {
        QByteArray ba;
        ba.resize(2);
        ba[0] = quint8 (ui->horizontalSlider->sliderPosition());
        ba[1] = 0xFD;
        //qDebug()<<QString::number((int) ((100*ui->horizontalSlider->sliderPosition())/252));
        serial->write(ba);
    }
}



