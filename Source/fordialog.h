#ifndef FORDIALOG_H
#define FORDIALOG_H

#include <QDialog>

namespace Ui {
class forDialog;
}

class forDialog : public QDialog
{
    Q_OBJECT

public:
    explicit forDialog(QWidget *parent = 0);
    ~forDialog();

private:
    Ui::forDialog *ui;
};

#endif // FORDIALOG_H
