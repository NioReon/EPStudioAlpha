/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(681, 442);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 0, 341, 441));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-untitled-Desktop_Qt_5_4_1_MinGW_32bit-Release/pic/1.png")));
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 70, 341, 301));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 </span></p><p align=\"center\"><span style=\" font-size:18pt;\">Easy Programming Studio (EPS)</span></p><p align=\"center\"><span style=\" font-size:18pt;\">\321\201\320\276\320\267\320\264\320\260\320\275\320\260 </span></p><p align=\"center\"><span style=\" font-size:18pt;\">\320\230\320\262\320\260\320\275\320\276\320\274 \320\241\320\274\320\270\321\200\320\275\320\276\320\262\321\213\320\274 \320\270 </span></p><p align=\"center\"><span style=\" font-size:18pt;\">\320\220\320\275\320\264\321\200\320\265\320\265\320\274 \320\223\321\203\320\273\320\270\320\275\321\213\320\274.</span></p><p align=\"center\"><span style=\" font-size:18pt;\">ver. 1.3</span></p><p align=\"center\"><span style=\" font-size:18pt;\">\320\230\321\216\320\275\321\214 2015\320\263.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
