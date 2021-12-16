#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listdialog.h"
#include "pesform.h"
#include <QFile>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QtDebug>




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


void MainWindow::on_aboutButton_clicked()
{
    ui->textEdit->setText("Student: Keisha Jackson \n \n Course: CSC211H-Prof. Azhar \n \n Topic: Quality Eduaction \n \n Accessible Schools in NYC ");
}


void MainWindow::on_contactButton_clicked()
{
    ui->textEdit->setText("Email: keisha.jackson@stu.bmcc.cuny.edu");
}


void MainWindow::on_exitButton_clicked()
{    QMessageBox::StandardButton reply=QMessageBox::question(this,"Quit","Are you sure you want to quit the program?",QMessageBox::Yes|QMessageBox::No);

     if (reply == QMessageBox::Yes) {
         qDebug() << "Yes was clicked";
         QApplication::quit();
       }
     else {
         qDebug() << "Yes was *not* clicked";
       }

}
void MainWindow::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.schools.nyc.gov/school-life/school-environment/building-accessibility", QUrl::TolerantMode));

}

void MainWindow::on_pushButton_clicked()
{  list2=new ListDialog(this);
   list2->show();
}


void MainWindow::on_plist_Button_clicked()
{
    perlist=new Pesform(this);
       perlist->show();
}


void MainWindow::on_resButton_2_clicked()
{
    web=new Resources(this);
       web->show();
}



