#include "variable.h"
#include "ui_variable.h"
#include "mainwindow.h"

Variable::Variable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Variable)
{
    ui->setupUi(this);
    Variable::setWindowIcon(QIcon("pic/plus.png"));
    Variable::setWindowTitle("Добавление новой переменной");
    ui->pushButton->setDisabled(true);
    QObject::connect(ui->pushButton,SIGNAL(clicked(bool)), this,  SLOT(OnButtonSend()));
}

Variable::~Variable()
{
    delete ui;
}
void Variable::OnButtonSend()
{
    QString S;
    if (ui->comboBox->currentText()=="Целый тип")
    {
    S.operator +=("int");
    }
    S.operator +=(" ");
    S.operator +=(ui->lineEdit->text());
    emit sendData(S);
    ui->lineEdit->setText("");
    ui->pushButton->setDisabled(true);
    close();
}

void Variable::on_lineEdit_textChanged(const QString &arg1)
{
    ui->pushButton->setEnabled(true);
    if (ui->lineEdit->text()=="")
    {
        ui->pushButton->setEnabled(false);
    }
    if (ui->lineEdit->text()==" ")
    {
        ui->lineEdit->setText("");
    }

}
