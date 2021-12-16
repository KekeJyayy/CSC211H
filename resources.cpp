#include "resources.h"
#include "ui_resources.h"
#include <QUrl>
#include <QDesktopServices>

Resources::Resources(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resources)
{
    ui->setupUi(this);
}

Resources::~Resources()
{
    delete ui;
}

void Resources::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("https://growingupnyc.cityofnewyork.us/generationnyc/topics/youth-with-disabilities/", QUrl::TolerantMode));

  }

void Resources::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.schools.nyc.gov/school-life/school-environment/building-accessibility", QUrl::TolerantMode));

}


void Resources::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.nyfoundling.org/what-we-do/our-programs/developmental-disabilities/community-habilitation/?utm_source=google&utm_medium=cpc&utm_campaign=&gclid=Cj0KCQiA5OuNBhCRARIsACgaiqWH0cylQTBVKbNZ4skah-Sh7uY1XUuOgbAz84mKU6TYzSblqKzE4xgaAhE6EALw_wcB", QUrl::TolerantMode));
}


void Resources::on_mayoff_button_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.schools.nyc.gov/school-life/school-environment/building-accessibility", QUrl::TolerantMode));
}

