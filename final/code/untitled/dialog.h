#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

signals:
    void sendData(QString str);
private slots:
    void onButtonSend();

private slots:

    void on_textEdit_textChanged();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
