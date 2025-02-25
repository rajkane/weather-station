/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *lbl_humidity;
    QLabel *lbl_sunset;
    QLabel *lbl_condition;
    QLabel *lbl_resolved_address;
    QLabel *lbl_temperature;
    QLabel *lbl_pressure;
    QLabel *lbl_feelslike;
    QLabel *lbl_datetime;
    QLabel *lbl_sunrise;
    QLabel *lbl_wind_speed;
    QLabel *lbl_status;
    QLabel *lbl_wind_direction;
    QLabel *lbl_description;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 700);
        MainWindow->setMinimumSize(QSize(1200, 700));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);\n"
"color: rgb(143, 240, 164);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        lbl_humidity = new QLabel(centralwidget);
        lbl_humidity->setObjectName("lbl_humidity");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_humidity->sizePolicy().hasHeightForWidth());
        lbl_humidity->setSizePolicy(sizePolicy);
        lbl_humidity->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_humidity->setFrameShape(QFrame::Shape::WinPanel);
        lbl_humidity->setFrameShadow(QFrame::Shadow::Raised);
        lbl_humidity->setScaledContents(true);
        lbl_humidity->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_humidity, 3, 2, 1, 1);

        lbl_sunset = new QLabel(centralwidget);
        lbl_sunset->setObjectName("lbl_sunset");
        sizePolicy.setHeightForWidth(lbl_sunset->sizePolicy().hasHeightForWidth());
        lbl_sunset->setSizePolicy(sizePolicy);
        lbl_sunset->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_sunset->setFrameShape(QFrame::Shape::WinPanel);
        lbl_sunset->setFrameShadow(QFrame::Shadow::Raised);
        lbl_sunset->setScaledContents(true);
        lbl_sunset->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_sunset, 6, 1, 1, 1);

        lbl_condition = new QLabel(centralwidget);
        lbl_condition->setObjectName("lbl_condition");
        sizePolicy.setHeightForWidth(lbl_condition->sizePolicy().hasHeightForWidth());
        lbl_condition->setSizePolicy(sizePolicy);
        lbl_condition->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_condition->setFrameShape(QFrame::Shape::WinPanel);
        lbl_condition->setFrameShadow(QFrame::Shadow::Raised);
        lbl_condition->setScaledContents(true);
        lbl_condition->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_condition, 3, 1, 1, 1);

        lbl_resolved_address = new QLabel(centralwidget);
        lbl_resolved_address->setObjectName("lbl_resolved_address");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_resolved_address->sizePolicy().hasHeightForWidth());
        lbl_resolved_address->setSizePolicy(sizePolicy1);
        lbl_resolved_address->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_resolved_address->setFrameShape(QFrame::Shape::WinPanel);
        lbl_resolved_address->setFrameShadow(QFrame::Shadow::Raised);
        lbl_resolved_address->setScaledContents(true);
        lbl_resolved_address->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_resolved_address, 0, 0, 1, 3);

        lbl_temperature = new QLabel(centralwidget);
        lbl_temperature->setObjectName("lbl_temperature");
        sizePolicy.setHeightForWidth(lbl_temperature->sizePolicy().hasHeightForWidth());
        lbl_temperature->setSizePolicy(sizePolicy);
        lbl_temperature->setStyleSheet(QString::fromUtf8("font: 100pt \"Ubuntu Sans\";"));
        lbl_temperature->setFrameShape(QFrame::Shape::WinPanel);
        lbl_temperature->setFrameShadow(QFrame::Shadow::Raised);
        lbl_temperature->setScaledContents(true);
        lbl_temperature->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_temperature, 2, 0, 1, 3);

        lbl_pressure = new QLabel(centralwidget);
        lbl_pressure->setObjectName("lbl_pressure");
        sizePolicy.setHeightForWidth(lbl_pressure->sizePolicy().hasHeightForWidth());
        lbl_pressure->setSizePolicy(sizePolicy);
        lbl_pressure->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_pressure->setFrameShape(QFrame::Shape::WinPanel);
        lbl_pressure->setFrameShadow(QFrame::Shadow::Raised);
        lbl_pressure->setScaledContents(true);
        lbl_pressure->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_pressure, 4, 2, 1, 1);

        lbl_feelslike = new QLabel(centralwidget);
        lbl_feelslike->setObjectName("lbl_feelslike");
        sizePolicy.setHeightForWidth(lbl_feelslike->sizePolicy().hasHeightForWidth());
        lbl_feelslike->setSizePolicy(sizePolicy);
        lbl_feelslike->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_feelslike->setFrameShape(QFrame::Shape::WinPanel);
        lbl_feelslike->setFrameShadow(QFrame::Shadow::Raised);
        lbl_feelslike->setScaledContents(true);
        lbl_feelslike->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_feelslike, 3, 0, 1, 1);

        lbl_datetime = new QLabel(centralwidget);
        lbl_datetime->setObjectName("lbl_datetime");
        lbl_datetime->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu Sans\";"));

        gridLayout->addWidget(lbl_datetime, 10, 0, 1, 1);

        lbl_sunrise = new QLabel(centralwidget);
        lbl_sunrise->setObjectName("lbl_sunrise");
        sizePolicy.setHeightForWidth(lbl_sunrise->sizePolicy().hasHeightForWidth());
        lbl_sunrise->setSizePolicy(sizePolicy);
        lbl_sunrise->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_sunrise->setFrameShape(QFrame::Shape::WinPanel);
        lbl_sunrise->setFrameShadow(QFrame::Shadow::Raised);
        lbl_sunrise->setScaledContents(true);
        lbl_sunrise->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_sunrise, 6, 0, 1, 1);

        lbl_wind_speed = new QLabel(centralwidget);
        lbl_wind_speed->setObjectName("lbl_wind_speed");
        sizePolicy.setHeightForWidth(lbl_wind_speed->sizePolicy().hasHeightForWidth());
        lbl_wind_speed->setSizePolicy(sizePolicy);
        lbl_wind_speed->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_wind_speed->setFrameShape(QFrame::Shape::WinPanel);
        lbl_wind_speed->setFrameShadow(QFrame::Shadow::Raised);
        lbl_wind_speed->setScaledContents(true);
        lbl_wind_speed->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_wind_speed, 4, 0, 1, 1);

        lbl_status = new QLabel(centralwidget);
        lbl_status->setObjectName("lbl_status");
        lbl_status->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu Sans\";"));

        gridLayout->addWidget(lbl_status, 9, 0, 1, 1);

        lbl_wind_direction = new QLabel(centralwidget);
        lbl_wind_direction->setObjectName("lbl_wind_direction");
        sizePolicy.setHeightForWidth(lbl_wind_direction->sizePolicy().hasHeightForWidth());
        lbl_wind_direction->setSizePolicy(sizePolicy);
        lbl_wind_direction->setStyleSheet(QString::fromUtf8("font: 30pt \"Ubuntu Sans\";"));
        lbl_wind_direction->setFrameShape(QFrame::Shape::WinPanel);
        lbl_wind_direction->setFrameShadow(QFrame::Shadow::Raised);
        lbl_wind_direction->setScaledContents(true);
        lbl_wind_direction->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_wind_direction, 4, 1, 1, 1);

        lbl_description = new QLabel(centralwidget);
        lbl_description->setObjectName("lbl_description");
        sizePolicy1.setHeightForWidth(lbl_description->sizePolicy().hasHeightForWidth());
        lbl_description->setSizePolicy(sizePolicy1);
        lbl_description->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu Sans\";"));
        lbl_description->setFrameShape(QFrame::Shape::WinPanel);
        lbl_description->setFrameShadow(QFrame::Shadow::Raised);
        lbl_description->setScaledContents(true);
        lbl_description->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_description, 1, 0, 1, 3);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(500, 0));
        textEdit->setFrameShape(QFrame::Shape::WinPanel);
        textEdit->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout->addWidget(textEdit, 0, 3, 5, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Weather Station", nullptr));
        lbl_humidity->setText(QCoreApplication::translate("MainWindow", "Humidity", nullptr));
        lbl_sunset->setText(QCoreApplication::translate("MainWindow", "Sunset", nullptr));
        lbl_condition->setText(QCoreApplication::translate("MainWindow", "Condition", nullptr));
        lbl_resolved_address->setText(QCoreApplication::translate("MainWindow", "Resolved Address", nullptr));
        lbl_temperature->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        lbl_pressure->setText(QCoreApplication::translate("MainWindow", "Pressure", nullptr));
        lbl_feelslike->setText(QCoreApplication::translate("MainWindow", "Feelslike", nullptr));
        lbl_datetime->setText(QString());
        lbl_sunrise->setText(QCoreApplication::translate("MainWindow", "Sunrise", nullptr));
        lbl_wind_speed->setText(QCoreApplication::translate("MainWindow", "Wind Speed", nullptr));
        lbl_status->setText(QString());
        lbl_wind_direction->setText(QCoreApplication::translate("MainWindow", "Wind Direction", nullptr));
        lbl_description->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
