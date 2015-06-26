#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("pic/1.png"));
    About::setWindowTitle("Информация о программе");
    About::setWindowIcon(QIcon("pic/1.png"));
    About::setFixedSize(681,442);
}

About::~About()
{
    delete ui;
}
