#include "info.h"
#include "ui_info.h"

info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("pic/1.png"));
}

info::~info()
{
    delete ui;
}
