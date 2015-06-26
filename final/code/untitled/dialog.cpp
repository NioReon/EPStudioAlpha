#include "dialog.h"
#include "ui_dialog.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <qfile.h>
#include <qtextstream.h>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    MainWindow *m;
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onButtonSend()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onButtonSend()
{
    emit sendData(ui->textEdit->toPlainText());
    ui->textEdit->setText("");
    close();

}

void Dialog::on_textEdit_textChanged()
{
    ui->pushButton->setEnabled(true);
    if (ui->textEdit->toPlainText()=="")
    {
        ui->pushButton->setEnabled(false);
    }
    if (ui->textEdit->toPlainText()==" ")
    {
        ui->textEdit->setText("");
    }

}
