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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *lbl_feelslike;
    QLabel *lbl_resolved_address;
    QLabel *lbl_temperature;
    QLabel *lbl_description;
    QLabel *lbl_wind_speed;
    QSpacerItem *verticalSpacer;
    QLabel *lbl_wind_direction;
    QLabel *lbl_sunrise;
    QLabel *lbl_pressure;
    QLabel *lbl_humidity;
    QLabel *lbl_status;
    QLabel *lbl_condition;
    QLabel *lbl_sunset;
    QLabel *lbl_datetime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(804, 589);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        lbl_feelslike = new QLabel(centralwidget);
        lbl_feelslike->setObjectName("lbl_feelslike");
        lbl_feelslike->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_feelslike->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_feelslike, 3, 0, 1, 1);

        lbl_resolved_address = new QLabel(centralwidget);
        lbl_resolved_address->setObjectName("lbl_resolved_address");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_resolved_address->sizePolicy().hasHeightForWidth());
        lbl_resolved_address->setSizePolicy(sizePolicy);
        lbl_resolved_address->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_resolved_address->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_resolved_address, 0, 0, 1, 1);

        lbl_temperature = new QLabel(centralwidget);
        lbl_temperature->setObjectName("lbl_temperature");
        sizePolicy.setHeightForWidth(lbl_temperature->sizePolicy().hasHeightForWidth());
        lbl_temperature->setSizePolicy(sizePolicy);
        lbl_temperature->setStyleSheet(QString::fromUtf8("font: 100pt \"Ubuntu Sans\";"));
        lbl_temperature->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_temperature, 2, 0, 1, 1);

        lbl_description = new QLabel(centralwidget);
        lbl_description->setObjectName("lbl_description");
        sizePolicy.setHeightForWidth(lbl_description->sizePolicy().hasHeightForWidth());
        lbl_description->setSizePolicy(sizePolicy);
        lbl_description->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_description, 1, 0, 1, 1);

        lbl_wind_speed = new QLabel(centralwidget);
        lbl_wind_speed->setObjectName("lbl_wind_speed");
        sizePolicy.setHeightForWidth(lbl_wind_speed->sizePolicy().hasHeightForWidth());
        lbl_wind_speed->setSizePolicy(sizePolicy);
        lbl_wind_speed->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_wind_speed->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_wind_speed, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 0, 1, 1);

        lbl_wind_direction = new QLabel(centralwidget);
        lbl_wind_direction->setObjectName("lbl_wind_direction");
        sizePolicy.setHeightForWidth(lbl_wind_direction->sizePolicy().hasHeightForWidth());
        lbl_wind_direction->setSizePolicy(sizePolicy);
        lbl_wind_direction->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_wind_direction->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_wind_direction, 7, 0, 1, 1);

        lbl_sunrise = new QLabel(centralwidget);
        lbl_sunrise->setObjectName("lbl_sunrise");
        sizePolicy.setHeightForWidth(lbl_sunrise->sizePolicy().hasHeightForWidth());
        lbl_sunrise->setSizePolicy(sizePolicy);
        lbl_sunrise->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_sunrise->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_sunrise, 9, 0, 1, 1);

        lbl_pressure = new QLabel(centralwidget);
        lbl_pressure->setObjectName("lbl_pressure");
        sizePolicy.setHeightForWidth(lbl_pressure->sizePolicy().hasHeightForWidth());
        lbl_pressure->setSizePolicy(sizePolicy);
        lbl_pressure->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_pressure->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_pressure, 8, 0, 1, 1);

        lbl_humidity = new QLabel(centralwidget);
        lbl_humidity->setObjectName("lbl_humidity");
        sizePolicy.setHeightForWidth(lbl_humidity->sizePolicy().hasHeightForWidth());
        lbl_humidity->setSizePolicy(sizePolicy);
        lbl_humidity->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_humidity->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_humidity, 5, 0, 1, 1);

        lbl_status = new QLabel(centralwidget);
        lbl_status->setObjectName("lbl_status");

        gridLayout->addWidget(lbl_status, 13, 0, 1, 1);

        lbl_condition = new QLabel(centralwidget);
        lbl_condition->setObjectName("lbl_condition");
        sizePolicy.setHeightForWidth(lbl_condition->sizePolicy().hasHeightForWidth());
        lbl_condition->setSizePolicy(sizePolicy);
        lbl_condition->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_condition->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_condition, 4, 0, 1, 1);

        lbl_sunset = new QLabel(centralwidget);
        lbl_sunset->setObjectName("lbl_sunset");
        sizePolicy.setHeightForWidth(lbl_sunset->sizePolicy().hasHeightForWidth());
        lbl_sunset->setSizePolicy(sizePolicy);
        lbl_sunset->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Sans\";"));
        lbl_sunset->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lbl_sunset, 10, 0, 1, 1);

        lbl_datetime = new QLabel(centralwidget);
        lbl_datetime->setObjectName("lbl_datetime");

        gridLayout->addWidget(lbl_datetime, 14, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 804, 23));
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
        lbl_feelslike->setText(QCoreApplication::translate("MainWindow", "Feelslike", nullptr));
        lbl_resolved_address->setText(QCoreApplication::translate("MainWindow", "Resolved Address", nullptr));
        lbl_temperature->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        lbl_description->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        lbl_wind_speed->setText(QCoreApplication::translate("MainWindow", "Wind Speed", nullptr));
        lbl_wind_direction->setText(QCoreApplication::translate("MainWindow", "Wind Direction", nullptr));
        lbl_sunrise->setText(QCoreApplication::translate("MainWindow", "Sunrise", nullptr));
        lbl_pressure->setText(QCoreApplication::translate("MainWindow", "Pressure", nullptr));
        lbl_humidity->setText(QCoreApplication::translate("MainWindow", "Humidity", nullptr));
        lbl_status->setText(QString());
        lbl_condition->setText(QCoreApplication::translate("MainWindow", "Condition", nullptr));
        lbl_sunset->setText(QCoreApplication::translate("MainWindow", "Sunset", nullptr));
        lbl_datetime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
