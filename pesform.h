#ifndef PESFORM_H
#define PESFORM_H

#include <QDialog>

namespace Ui {
class Pesform;
}

class Pesform : public QDialog
{
    Q_OBJECT

public:
    explicit Pesform(QWidget *parent = nullptr);
    ~Pesform();

private:
    Ui::Pesform *ui;
};

#endif // PESFORM_H
