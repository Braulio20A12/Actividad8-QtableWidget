#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <qfiledialog.h>
#include <QDebug>
#include <QTableWidgetItem>
#include <QTableWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->Res->setText(QString::number(ui->Id->value()));

    ui->Res->setText(QString::number(ui->Voltaj->value()));

    ui->Res->setText(QString::number(ui->PosicionX->value()));

    ui->Res->setText(QString::number(ui->PosicionY->value()));

    ui->Res->setText(QString::number(ui->Red->value()));

    ui->Res->setText(QString::number(ui->Green->value()));

    ui->Res->setText(QString::number(ui->Blue->value()));
}


void MainWindow::on_actionGuardar_triggered()
{
    std::cout<<"Guardar"<<std::endl;
    QString Filename= QFileDialog::getOpenFileName(this, "Guardar ", ".", "imagenes (*.jpg)");
    std::string file= Filename.toStdString();
    std::cout<<file<<std::endl;
}


void MainWindow::on_actionAbrir_triggered()
{
    std::cout<<"Abrir"<<std::endl;
    QString Filename= QFileDialog::getOpenFileName(this, "Abrir ", ".", "imagenes (*.jpg)");
    std::string file= Filename.toStdString();
    std::cout<<file<<std::endl;
}




void MainWindow::on_pushButton_2_clicked()
{
    ui->tableWidget->setColumnCount(7);
    QStringList headers = {"Id", "Voltaje", "Pos X", "Pos Y", "Rojo", "Verde", "Azul" };
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(10);
    QTableWidgetItem *id = new QTableWidgetItem("1");
    QTableWidgetItem *V = new QTableWidgetItem("-100");
    QTableWidgetItem *X = new QTableWidgetItem("15");
    QTableWidgetItem *Y = new QTableWidgetItem("13");

    ui->tableWidget->setItem(1,1,id);
    ui->tableWidget->setItem(0,1,V);
    ui->tableWidget->setItem(0,2,X);
    ui->tableWidget->setItem(0,3,Y);
}

