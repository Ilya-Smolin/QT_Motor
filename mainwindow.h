#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPortInfo>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTimer *timer;

private slots:
    void enable_disable_all (bool tralse);

    void on_pushButton_connect_clicked();

    void on_forward_button_clicked();

    void on_stop_button_clicked();

    void on_update_ports_clicked();

    void serialRecieved();

    void updateTimer();

    void on_reverse_button_clicked();


private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
};
#endif // MAINWINDOW_H
