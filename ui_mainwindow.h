/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_ports;
    QLabel *label_connection;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_current_state;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_speed;
    QSlider *horizontalSlider;
    QPushButton *update_ports;
    QPushButton *pushButton_connect;
    QHBoxLayout *horizontalLayout;
    QPushButton *stop_button;
    QPushButton *forward_button;
    QPushButton *reverse_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(567, 338);
        QPalette palette;
        QBrush brush(QColor(240, 48, 109, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(182, 192, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox_ports = new QComboBox(centralwidget);
        comboBox_ports->setObjectName(QString::fromUtf8("comboBox_ports"));
        comboBox_ports->setMinimumSize(QSize(446, 0));
        QPalette palette1;
        QBrush brush3(QColor(210, 240, 200, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(157, 226, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(213, 255, 224, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        comboBox_ports->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        comboBox_ports->setFont(font);
        comboBox_ports->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(comboBox_ports);

        label_connection = new QLabel(centralwidget);
        label_connection->setObjectName(QString::fromUtf8("label_connection"));
        label_connection->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_connection->setFont(font1);
        label_connection->setCursor(QCursor(Qt::ArrowCursor));
        label_connection->setFrameShape(QFrame::NoFrame);
        label_connection->setFrameShadow(QFrame::Plain);
        label_connection->setLineWidth(1);
        label_connection->setAlignment(Qt::AlignCenter);
        label_connection->setWordWrap(false);
        label_connection->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(label_connection);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);

        horizontalLayout_2->addWidget(label);

        label_current_state = new QLabel(centralwidget);
        label_current_state->setObjectName(QString::fromUtf8("label_current_state"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        label_current_state->setPalette(palette2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("LCDMono2"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        label_current_state->setFont(font3);
        label_current_state->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_current_state);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        label_speed = new QLabel(centralwidget);
        label_speed->setObjectName(QString::fromUtf8("label_speed"));
        label_speed->setFont(font3);
        label_speed->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_speed);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        horizontalSlider->setPalette(palette3);
        horizontalSlider->setFont(font);
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMaximum(252);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(10);

        verticalLayout->addWidget(horizontalSlider);

        update_ports = new QPushButton(centralwidget);
        update_ports->setObjectName(QString::fromUtf8("update_ports"));
        QPalette palette4;
        QBrush brush6(QColor(240, 101, 103, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        update_ports->setPalette(palette4);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Bahnschrift"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        update_ports->setFont(font4);
        update_ports->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(update_ports);

        pushButton_connect = new QPushButton(centralwidget);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        pushButton_connect->setPalette(palette5);
        pushButton_connect->setFont(font4);
        pushButton_connect->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_connect->setCheckable(true);
        pushButton_connect->setChecked(false);
        pushButton_connect->setFlat(false);

        verticalLayout->addWidget(pushButton_connect);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stop_button = new QPushButton(centralwidget);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        stop_button->setPalette(palette6);
        stop_button->setFont(font4);
        stop_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(stop_button);

        forward_button = new QPushButton(centralwidget);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        forward_button->setPalette(palette7);
        forward_button->setFont(font4);
        forward_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(forward_button);

        reverse_button = new QPushButton(centralwidget);
        reverse_button->setObjectName(QString::fromUtf8("reverse_button"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        reverse_button->setPalette(palette8);
        reverse_button->setFont(font4);
        reverse_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(reverse_button);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_connection->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Current State:", nullptr));
        label_current_state->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Current Speed:", nullptr));
        label_speed->setText(QString());
        update_ports->setText(QCoreApplication::translate("MainWindow", "Update ports list", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        stop_button->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        forward_button->setText(QCoreApplication::translate("MainWindow", "Forward", nullptr));
        reverse_button->setText(QCoreApplication::translate("MainWindow", "Reverse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
