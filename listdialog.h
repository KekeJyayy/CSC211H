#ifndef LISTDIALOG_H
#define LISTDIALOG_H

#include <QDialog>

namespace Ui {
class ListDialog;
}

class ListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListDialog(QWidget *parent = nullptr);
    ~ListDialog();

private slots:
    void on_EarlyC_button_2_clicked();

    void on_elemnt_button_2_clicked();

    void on_K8_Button_2_clicked();

    void on_K12_Button_2_clicked();

    void on_HighS_button_2_clicked();

    void on_juniorH_button_2_clicked();

private:
    Ui::ListDialog *ui;
};

#endif // LISTDIALOG_H
