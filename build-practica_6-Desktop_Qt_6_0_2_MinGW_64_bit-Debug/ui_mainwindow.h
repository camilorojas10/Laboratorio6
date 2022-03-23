/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *posX;
    QDoubleSpinBox *posY;
    QLabel *label_4;
    QDoubleSpinBox *velY;
    QLabel *label_3;
    QDoubleSpinBox *velX;
    QPushButton *verificar;
    QLabel *label_7;
    QDoubleSpinBox *radio;
    QLabel *label_5;
    QDoubleSpinBox *masa;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ingresar;
    QPushButton *simular;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1338, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 50, 1051, 661));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1110, 80, 211, 273));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        posX = new QDoubleSpinBox(verticalLayoutWidget);
        posX->setObjectName(QString::fromUtf8("posX"));
        posX->setMinimum(-99999.990000000005239);
        posX->setMaximum(99999.990000000005239);

        formLayout->setWidget(1, QFormLayout::LabelRole, posX);

        posY = new QDoubleSpinBox(verticalLayoutWidget);
        posY->setObjectName(QString::fromUtf8("posY"));
        posY->setMinimum(-99999.990000000005239);
        posY->setMaximum(99999.990000000005239);

        formLayout->setWidget(1, QFormLayout::FieldRole, posY);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_4);

        velY = new QDoubleSpinBox(verticalLayoutWidget);
        velY->setObjectName(QString::fromUtf8("velY"));
        velY->setMinimum(-10.000000000000000);
        velY->setMaximum(10.990000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, velY);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        velX = new QDoubleSpinBox(verticalLayoutWidget);
        velX->setObjectName(QString::fromUtf8("velX"));
        velX->setMinimum(-10.000000000000000);
        velX->setMaximum(10.990000000000000);

        formLayout->setWidget(3, QFormLayout::LabelRole, velX);


        verticalLayout_6->addLayout(formLayout);

        verificar = new QPushButton(verticalLayoutWidget);
        verificar->setObjectName(QString::fromUtf8("verificar"));

        verticalLayout_6->addWidget(verificar);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        radio = new QDoubleSpinBox(verticalLayoutWidget);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setMaximum(9999.989999999999782);

        verticalLayout_6->addWidget(radio);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        masa = new QDoubleSpinBox(verticalLayoutWidget);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setMaximum(9999999.990000000223517);

        verticalLayout_6->addWidget(masa);


        verticalLayout->addLayout(verticalLayout_6);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(1110, 360, 201, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ingresar = new QPushButton(horizontalLayoutWidget);
        ingresar->setObjectName(QString::fromUtf8("ingresar"));

        horizontalLayout->addWidget(ingresar);

        simular = new QPushButton(centralWidget);
        simular->setObjectName(QString::fromUtf8("simular"));
        simular->setGeometry(QRect(1180, 460, 80, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1338, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "                           Radio", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "   Pos X       ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "           Pos Y   ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "            Vel Y", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "   Vel X", nullptr));
        verificar->setText(QCoreApplication::translate("MainWindow", "verificar pos", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "                    Radio", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "                       Masa", nullptr));
        ingresar->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        simular->setText(QCoreApplication::translate("MainWindow", "simular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
