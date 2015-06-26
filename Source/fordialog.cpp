#include "fordialog.h"
#include "ui_fordialog.h"

forDialog::forDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forDialog)
{
    ui->setupUi(this);
}

forDialog::~forDialog()
{
    delete ui;
}
