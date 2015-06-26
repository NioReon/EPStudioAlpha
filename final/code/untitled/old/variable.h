#ifndef VARIABLE_H
#define VARIABLE_H

#include <QDialog>

namespace Ui {
class Variable;
}

class Variable : public QDialog
{
    Q_OBJECT
signals:
    void sendData(QString str);

private slots:
    void OnButtonSend();
    void on_lineEdit_textChanged(const QString &arg1);

public:
    explicit Variable(QWidget *parent = 0);
    ~Variable();

private:
    Ui::Variable *ui;
};

#endif // VARIABLE_H
