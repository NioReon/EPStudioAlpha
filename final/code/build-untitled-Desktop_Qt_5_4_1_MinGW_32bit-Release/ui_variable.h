/********************************************************************************
** Form generated from reading UI file 'variable.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLE_H
#define UI_VARIABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Variable
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Variable)
    {
        if (Variable->objectName().isEmpty())
            Variable->setObjectName(QStringLiteral("Variable"));
        Variable->resize(236, 114);
        pushButton = new QPushButton(Variable);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 80, 75, 23));
        comboBox = new QComboBox(Variable);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 81, 22));
        lineEdit = new QLineEdit(Variable);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 40, 113, 20));
        label = new QLabel(Variable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 121, 16));
        label_2 = new QLabel(Variable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 91, 16));

        retranslateUi(Variable);

        QMetaObject::connectSlotsByName(Variable);
    } // setupUi

    void retranslateUi(QDialog *Variable)
    {
        Variable->setWindowTitle(QApplication::translate("Variable", "Dialog", 0));
        pushButton->setText(QApplication::translate("Variable", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Variable", "\320\246\320\265\320\273\321\213\320\271 \321\202\320\270\320\277", 0)
        );
        label->setText(QApplication::translate("Variable", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271", 0));
        label_2->setText(QApplication::translate("Variable", "\320\242\320\270\320\277 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271", 0));
    } // retranslateUi

};

namespace Ui {
    class Variable: public Ui_Variable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLE_H
