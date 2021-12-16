#ifndef RESOURCES_H
#define RESOURCES_H

#include <QDialog>

namespace Ui {
class Resources;
}

class Resources : public QDialog
{
    Q_OBJECT

public:
    explicit Resources(QWidget *parent = nullptr);
    ~Resources();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_mayoff_button_clicked();

private:
    Ui::Resources *ui;
};

#endif // RESOURCES_H
