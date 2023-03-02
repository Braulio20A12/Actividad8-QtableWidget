/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGuardar;
    QAction *actionAbrir;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QSpinBox *Id;
    QDoubleSpinBox *Voltaj;
    QSpinBox *PosicionX;
    QSpinBox *PosicionY;
    QSpinBox *Green;
    QSpinBox *Red;
    QSpinBox *Blue;
    QPushButton *pushButton;
    QLabel *Res;
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_8;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("Guardar");
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("Abrir");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(210, 90, 541, 451));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 10, 511, 401));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 120, 108, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 160, 108, 24));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(20, 200, 108, 24));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 30, 108, 24));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(20, 240, 108, 24));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(20, 70, 108, 24));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(20, 280, 108, 24));
        Id = new QSpinBox(groupBox);
        Id->setObjectName("Id");
        Id->setGeometry(QRect(180, 30, 42, 25));
        Voltaj = new QDoubleSpinBox(groupBox);
        Voltaj->setObjectName("Voltaj");
        Voltaj->setGeometry(QRect(170, 70, 62, 25));
        PosicionX = new QSpinBox(groupBox);
        PosicionX->setObjectName("PosicionX");
        PosicionX->setGeometry(QRect(180, 120, 42, 25));
        PosicionY = new QSpinBox(groupBox);
        PosicionY->setObjectName("PosicionY");
        PosicionY->setGeometry(QRect(180, 160, 42, 25));
        Green = new QSpinBox(groupBox);
        Green->setObjectName("Green");
        Green->setGeometry(QRect(180, 200, 42, 25));
        Red = new QSpinBox(groupBox);
        Red->setObjectName("Red");
        Red->setGeometry(QRect(180, 240, 42, 25));
        Blue = new QSpinBox(groupBox);
        Blue->setObjectName("Blue");
        Blue->setGeometry(QRect(180, 280, 42, 25));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 350, 80, 24));
        Res = new QLabel(groupBox);
        Res->setObjectName("Res");
        Res->setGeometry(QRect(280, 40, 191, 261));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(80, 120, 80, 24));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(80, 250, 80, 24));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(50, 290, 113, 24));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(250, 31, 256, 321));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionAbrir);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Neurona", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Posicion X", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Posicion Y", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Capturar", nullptr));
        Res->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Mostrar Tabla", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
