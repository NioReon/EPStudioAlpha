/********************************************************************************
** Form generated from reading UI file 'for.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOR_H
#define UI_FOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_for
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *for)
    {
        if (for->objectName().isEmpty())
            for->setObjectName(QStringLiteral("for"));
        for->resize(301, 78);
        label = new QLabel(for);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 51, 31));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(for);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 51, 21));
        lineEdit_2 = new QLineEdit(for);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 20, 51, 20));
        label_2 = new QLabel(for);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 10, 61, 31));
        label_2->setFont(font);
        label_3 = new QLabel(for);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 10, 61, 31));
        label_3->setFont(font);
        pushButton = new QPushButton(for);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 50, 75, 23));

        retranslateUi(for);

        QMetaObject::connectSlotsByName(for);
    } // setupUi

    void retranslateUi(QDialog *for)
    {
        for->setWindowTitle(QApplication::translate("for", "Dialog", 0));
        label->setText(QApplication::translate("for", "for", 0));
        label_2->setText(QApplication::translate("for", "\320\276\321\202", 0));
        label_3->setText(QApplication::translate("for", "\320\264\320\276", 0));
        pushButton->setText(QApplication::translate("for", "\320\236\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class for: public Ui_for {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOR_H
