/********************************************************************************
** Form generated from reading UI file 'fordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORDIALOG_H
#define UI_FORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_forDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *forDialog)
    {
        if (forDialog->objectName().isEmpty())
            forDialog->setObjectName(QStringLiteral("forDialog"));
        forDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(forDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(forDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), forDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), forDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(forDialog);
    } // setupUi

    void retranslateUi(QDialog *forDialog)
    {
        forDialog->setWindowTitle(QApplication::translate("forDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class forDialog: public Ui_forDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORDIALOG_H
