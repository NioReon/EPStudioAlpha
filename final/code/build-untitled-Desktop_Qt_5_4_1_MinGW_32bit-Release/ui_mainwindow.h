/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_5;
    QAction *action_7;
    QAction *action_3;
    QAction *action_4;
    QAction *action_6;
    QWidget *centralWidget;
    QTreeWidget *treeWidget;
    QLabel *label_21;
    QLabel *label_22;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_19;
    QToolBox *toolBox;
    QWidget *page_7;
    QLabel *label_20;
    QWidget *page;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_11;
    QLabel *label_23;
    QWidget *page_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *pushButton_9;
    QWidget *page_3;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_12;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *page_4;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QLabel *label_15;
    QLineEdit *lineEdit_8;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_13;
    QWidget *page_5;
    QLabel *label_18;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_14;
    QWidget *page_6;
    QLabel *label_19;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_7;
    QLabel *label;
    QWidget *widget;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_18;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(765, 561);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 247, 247, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 119, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 159, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../../Desktop/EPS/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(270, 130, 241, 341));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy1);
        treeWidget->setMinimumSize(QSize(241, 341));
        treeWidget->setSizeIncrement(QSize(5, 0));
        QFont font1;
        font1.setPointSize(12);
        treeWidget->setFont(font1);
        treeWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
        treeWidget->setTabKeyNavigation(true);
        treeWidget->setDragEnabled(false);
        treeWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->setIconSize(QSize(1, 1));
        treeWidget->setUniformRowHeights(true);
        treeWidget->setItemsExpandable(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(true);
        treeWidget->setWordWrap(true);
        treeWidget->setColumnCount(1);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setHighlightSections(true);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 50, 381, 421));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/EPS/1.png")));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(410, 100, 341, 311));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 128, 231, 341));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy2);
        listWidget->setMinimumSize(QSize(0, 341));
        listWidget->setMaximumSize(QSize(231, 16777215));
        listWidget->setFont(font1);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 689, 89));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tabWidget->setMinimumSize(QSize(689, 89));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(241, 241, 241, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush8(QColor(248, 248, 248, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(120, 120, 120, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(161, 161, 161, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette1);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(40, 10, 81, 41));
        pushButton->setMinimumSize(QSize(81, 41));
        pushButton->setMaximumSize(QSize(81, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../Desktop/EPS/for.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 10, 81, 41));
        pushButton_2->setMinimumSize(QSize(81, 41));
        pushButton_2->setMaximumSize(QSize(81, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../Desktop/EPS/if.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(25, 25));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 10, 81, 41));
        pushButton_3->setMinimumSize(QSize(81, 41));
        pushButton_3->setMaximumSize(QSize(81, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../Desktop/EPS/while.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(50, 50));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 10, 81, 41));
        pushButton_4->setMinimumSize(QSize(81, 41));
        pushButton_4->setMaximumSize(QSize(81, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../Desktop/EPS/123.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(50, 50));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(440, 10, 81, 41));
        pushButton_5->setMinimumSize(QSize(81, 41));
        pushButton_5->setMaximumSize(QSize(81, 41));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../Desktop/EPS/write.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(50, 50));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(540, 10, 81, 41));
        pushButton_6->setMinimumSize(QSize(81, 41));
        pushButton_6->setMaximumSize(QSize(81, 41));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../Desktop/EPS/read.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon6);
        pushButton_6->setIconSize(QSize(50, 50));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_16 = new QPushButton(tab_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(40, 10, 41, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../Desktop/EPS/autozapusk.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon7);
        pushButton_16->setIconSize(QSize(41, 41));
        pushButton_19 = new QPushButton(tab_2);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(100, 10, 41, 41));
        pushButton_19->setIcon(icon7);
        pushButton_19->setIconSize(QSize(41, 41));
        tabWidget->addTab(tab_2, QString());
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(530, 130, 221, 341));
        sizePolicy3.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy3);
        toolBox->setMinimumSize(QSize(201, 341));
        QFont font2;
        font2.setPointSize(10);
        font2.setKerning(true);
        toolBox->setFont(font2);
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        toolBox->setMidLineWidth(0);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 221, 131));
        label_20 = new QLabel(page_7);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 0, 201, 131));
        toolBox->addItem(page_7, QString::fromUtf8("\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\276\320\262"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 221, 131));
        pushButton_8 = new QPushButton(page);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 90, 75, 23));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 60, 51, 20));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(142, 60, 51, 20));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 13));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 60, 47, 13));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 211, 21));
        lineEdit_11 = new QLineEdit(page);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(120, 30, 71, 20));
        lineEdit_11->setInputMethodHints(Qt::ImhNone);
        label_23 = new QLabel(page);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 30, 121, 16));
        toolBox->addItem(page, QStringLiteral("for"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 221, 131));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 0, 101, 16));
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 50, 71, 20));
        comboBox = new QComboBox(page_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 50, 31, 22));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 30, 61, 16));
        lineEdit_4 = new QLineEdit(page_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 50, 71, 20));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 47, 13));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 30, 47, 13));
        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 90, 75, 23));
        toolBox->addItem(page_2, QStringLiteral("if"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 221, 131));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 0, 181, 16));
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(80, 50, 31, 22));
        lineEdit_5 = new QLineEdit(page_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(0, 50, 71, 20));
        lineEdit_6 = new QLineEdit(page_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(120, 50, 71, 20));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(110, 90, 75, 23));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 30, 47, 13));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 30, 61, 16));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(130, 30, 47, 13));
        toolBox->addItem(page_3, QStringLiteral("while"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 221, 131));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 0, 151, 16));
        label_14 = new QLabel(page_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 20, 91, 16));
        lineEdit_7 = new QLineEdit(page_4);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(10, 60, 61, 20));
        label_15 = new QLabel(page_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(80, 60, 47, 13));
        lineEdit_8 = new QLineEdit(page_4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(100, 60, 91, 20));
        label_16 = new QLabel(page_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 40, 47, 13));
        label_17 = new QLabel(page_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(120, 40, 61, 16));
        pushButton_13 = new QPushButton(page_4);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(110, 90, 75, 23));
        toolBox->addItem(page_4, QStringLiteral("x="));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 221, 131));
        label_18 = new QLabel(page_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 10, 151, 16));
        lineEdit_9 = new QLineEdit(page_5);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(10, 40, 181, 20));
        pushButton_14 = new QPushButton(page_5);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(120, 80, 75, 23));
        toolBox->addItem(page_5, QStringLiteral("write"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 221, 131));
        label_19 = new QLabel(page_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(9, 9, 140, 16));
        lineEdit_10 = new QLineEdit(page_6);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(20, 40, 150, 22));
        pushButton_15 = new QPushButton(page_6);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(90, 80, 75, 24));
        toolBox->addItem(page_6, QStringLiteral("read"));
        pushButton_17 = new QPushButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton_17);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(210, 100, 31, 24));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy4);
        pushButton_17->setMinimumSize(QSize(0, 24));
        pushButton_17->setMaximumSize(QSize(31, 16777215));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../Desktop/EPS/\320\221\320\265\320\267 \320\270\320\274\320\265\320\275\320\270-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon8);
        pushButton_7 = new QPushButton(centralWidget);
        buttonGroup->addButton(pushButton_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 100, 191, 24));
        sizePolicy4.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy4);
        pushButton_7->setMinimumSize(QSize(191, 24));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../Desktop/EPS/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon9);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(270, 100, 131, 24));
        label->setMinimumSize(QSize(0, 24));
        label->setMaximumSize(QSize(131, 16777215));
        label->setFont(font1);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(416, 90, 91, 24));
        widget->setMinimumSize(QSize(91, 24));
        QFont font3;
        font3.setKerning(false);
        widget->setFont(font3);
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(60, 0, 28, 24));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy5);
        pushButton_10->setMinimumSize(QSize(0, 24));
        pushButton_10->setIcon(icon8);
        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 0, 28, 24));
        sizePolicy5.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy5);
        pushButton_11->setMinimumSize(QSize(0, 24));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../../Desktop/EPS/\320\221\320\265\320\267 \320\270\320\274\320\265\320\275\320\270-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon10);
        pushButton_18 = new QPushButton(widget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(0, 0, 28, 24));
        sizePolicy5.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy5);
        pushButton_18->setMinimumSize(QSize(0, 24));
        pushButton_18->setIcon(icon10);
        MainWindow->setCentralWidget(centralWidget);
        label_22->raise();
        label_21->raise();
        treeWidget->raise();
        listWidget->raise();
        tabWidget->raise();
        toolBox->raise();
        pushButton_17->raise();
        pushButton_7->raise();
        label->raise();
        widget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 765, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_3);
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addSeparator();
        menu->addAction(action_5);
        menu->addSeparator();
        menu->addAction(action_7);
        menu_2->addAction(action_4);
        menu_2->addSeparator();
        menu_2->addAction(action_6);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);
        toolBox->layout()->setSpacing(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EPStudio", 0));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        action_7->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        action_6->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        label_21->setText(QString());
        label_22->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262</span></p><p align=\"center\"><span style=\" font-size:22pt;\">EPStudio!</span></p><p align=\"center\"><span style=\" font-size:22pt;\">\320\247\321\202\320\276\320\261\321\213 \320\275\320\260\321\207\320\260\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203, </span></p><p align=\"center\"><span style=\" font-size:22pt;\">\320\235\320\260\320\266\320\274\320\270\321\202\320\265 </span></p><p align=\"center\"><span style=\" font-size:22pt;\">\320\244\320\260\320\271\320\273-&gt;\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\246\320\270\320\272\320\273 for. \320\237\320\276\320\262\321\202\320\276\321\200\321\217\320\265\321\202 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\262\320\275\321\203\321\202\321\200\320\270 \321\201\320\265\320\261\321\217 \320\262 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\274 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\265</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200 if. \320\225\321\201\320\273\320\270 \321\203\321\201\320\273\320\276\320\262\320\270\320\265, \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\265 \320\262\320\275\321\203\321\202\321\200\320\270 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260, \320\262\320\265\321\200\320\275\320\276, \321\202\320\276 \320\262\321\213\320\277\320\276\320\273\320\275\321\217\320\265\321\202\321\201\321\217 \320\262\320\265\321\202\320\272\320\260 then, \320\270\320\275\320\260\321\207\320\265 \320\262\321\213\320\277\320\276\320\273\320\275\321\217\320\265\321\202\321\201\321\217 else</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\246\320\270\320\272\320\273 while. \320\237\320\276\320\272\320\260 \321\203\321\201\320\273\320\276\320\262\320\270\320\265, \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\265 \320\262 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260\321\205 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260, \320\262\320\265\321\200\320\275\320\276, \320\262\321\213\320\277\320\276\320\273\320\275\321\217\320\265\321\202\321\201\321\217 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \320\262\320\275\321\203\321\202\321\200\320\270 while</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200 \320\277\321\200\320\270\321\201\320\262\320\260\320\270\320\262\320\260\320\275\320\270\321\217. \320\222 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260\321\205 \321\203\320\272\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 \320\270\320\274\321\217 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271 (\321\203\320\266\320\265 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\265\320\271 \320\270\320\273\320\270 \320\275\320\276\320\262\320\276\320\271) \320\270 \320\265\321\221 \320\275\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200 write. \320\222\321\213\320\262\320\276\320\264\320\270\321\202 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275 \321\202\320\276, \321\207\321\202\320\276 \321\203\320\272\320\260\320\267\320\260\320\275\320\276 \320\262 \320\265\320\263\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\265. \320\225\321\201\320\273\320\270 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265 \320\275\320\260\321\205\320\276\320\264\320\270\321\202\321\201\321\217 \320\262 \320\272\320\260\320\262\321\213\321\207\320\272\320\260\321\205 &quot; &quot;, \321\202\320\276 \320\262\321\213\320\262\320\276\320\264\320\270\321\202 \320\261\320\265\320\267 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271, \320\270\320\275\320\260\321\207\320\265 \320\277\321\213\321\202\320\260\320\265\321\202\321\201\321\217 \320\275\320\260\320\271\321\202\320\270 \320\277\320\265\321"
                        "\200\320\265\320\274\320\265\320\275\320\275\321\203\321\216 \321\201 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 \320\270\320\274\320\265\320\275\320\265\320\274 \320\270 \320\262\321\213\320\262\320\265\321\201\321\202\320\270 \320\265\321\221 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200 read. \320\241\321\207\320\270\321\202\321\213\320\262\320\260\320\265\321\202 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\201 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\321\213 \320\262 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\203\321\216, \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\203\321\216 \320\262 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\265</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200\321\213", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_16->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\272\320\276\320\274\320\277\320\270\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_16->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_16->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_19->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\272\320\276\320\274\320\277\320\270\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_19->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_19->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\261\321\213\321\201\321\202\321\200\320\276\320\263\320\276 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", 0));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\247\321\202\320\276\320\261\321\213 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\274\320\265\320\275\321\216 </p><p align=\"center\">\320\262\321\213\320\261\320\276\321\200\320\260 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262  \320\272\320\260\320\272\320\276\320\263\320\276-\320\273\320\270\320\261\320\276</p><p align=\"center\">\320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260, \320\272\320\273\320\270\320\272\320\275\320\270\321\202\320\265 \320\275\320\260 \320\275\320\265\320\263\320\276 </p><p align=\"center\">\320\264\320\262\320\260\320\266\320\264\321\213 \320\262 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\200\320\260\320\261\320\276\321\207\320\265\320\271 </p><p align=\"center\">\320\276\320\261\320\273\320\260\321\201\321\202\320\270</p></body></html>", 0));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\276\320\262", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\276\321\202", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\264\320\276", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\206\320\270\320\272\320\273\320\260:</p></body></html>", 0));
        label_23->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "for", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\320\265", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", ">", 0)
         << QApplication::translate("MainWindow", "<", 0)
         << QApplication::translate("MainWindow", "=", 0)
         << QApplication::translate("MainWindow", "\342\211\245", 0)
         << QApplication::translate("MainWindow", "\342\211\245", 0)
         << QApplication::translate("MainWindow", "\342\211\240", 0)
        );
        label_7->setText(QApplication::translate("MainWindow", "\320\243\321\201\320\273.", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200. 1", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200. 2", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "if", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\320\265 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", ">", 0)
         << QApplication::translate("MainWindow", "<", 0)
         << QApplication::translate("MainWindow", "=", 0)
         << QApplication::translate("MainWindow", "\342\211\245", 0)
         << QApplication::translate("MainWindow", "\342\211\244", 0)
         << QApplication::translate("MainWindow", "\342\211\240", 0)
        );
#ifndef QT_NO_TOOLTIP
        pushButton_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_12->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        label_10->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200. 1", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\243\321\201\320\273.", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200. 2", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "while", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271 ", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\270 \320\265\321\221 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", 0));
        label_15->setText(QApplication::translate("MainWindow", "=", 0));
        label_16->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", 0));
        label_17->setText(QApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_13->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "x=", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_14->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MainWindow", "write", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\260\321\217 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_15->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_15->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("MainWindow", "read", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_17->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\203\321\216 \320\277\320\276\320\264\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_17->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\277\320\276\320\264\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\264\320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", 0));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\320\275\321\217\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\201\320\276 \320\262\321\201\320\265\321\205 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 (\320\277\320\265\321\200\320\265\320\271\321\202\320\270 \320\262 \320\272\320\276\321\200\320\265\320\275\321\214 \320\264\320\265\321\200\320\265\320\262\320\260)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_11->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_18->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\203\321\216</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_18->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
