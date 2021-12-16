#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QFile>
#include <QMainWindow>
#include "listdialog.h"
#include "pesform.h"
#include "resources.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_aboutButton_clicked();

    void on_contactButton_clicked();

    void on_exitButton_clicked();

    void on_pushButton_clicked();

    void on_plist_Button_clicked();

    void on_pushButton_2_clicked();

    void on_resButton_2_clicked();

private:
    Ui::MainWindow *ui;
    ListDialog *list2;
    Pesform *perlist;
    Resources *web;

};
#endif // MAINWINDOW_H
