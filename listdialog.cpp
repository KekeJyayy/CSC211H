#include "listdialog.h"
#include "ui_listdialog.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>


ListDialog::ListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListDialog)
{
    ui->setupUi(this);
}

ListDialog::~ListDialog()
{
    delete ui;
}

void ListDialog::on_EarlyC_button_2_clicked()
{
           QFile file("C:\\Users\\keima\\Downloads\\EarlyChildhood.txt");
           file.open(QFile::ReadOnly | QFile::Text);
           ui->textEdit->setPlainText(file.readAll());
}

void ListDialog::on_elemnt_button_2_clicked()
{
           QFile file("C:\\Users\\keima\\Downloads\\Elementary.txt");
           file.open(QFile::ReadOnly | QFile::Text);
           ui->textEdit->setPlainText(file.readAll());
}

void ListDialog::on_K8_Button_2_clicked()
{
        QFile file("C:\\Users\\keima\\Downloads\\K8Only.txt");
        file.open(QFile::ReadOnly | QFile::Text);
        ui->textEdit->setPlainText(file.readAll());
}


void ListDialog::on_K12_Button_2_clicked()
{
        QFile file("C:\\Users\\keima\\Downloads\\K12Allgrades.txt");
        file.open(QFile::ReadOnly | QFile::Text);
        ui->textEdit->setPlainText(file.readAll());
}

void ListDialog::on_HighS_button_2_clicked()
{
        QFile file("C:\\Users\\keima\\Downloads\\HighSchool.txt");
        file.open(QFile::ReadOnly | QFile::Text);
        ui->textEdit->setPlainText(file.readAll());
}


void ListDialog::on_juniorH_button_2_clicked()
{
        QFile file("C:\\Users\\keima\\Downloads\\JuniorHigh.txt");
        file.open(QFile::ReadOnly | QFile::Text);
        ui->textEdit->setPlainText(file.readAll());
}

