#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qlistwidget.h>
#include <dialog.h>
#include <qtreewidget.h>
#include "QKeyEvent"
#include "qfile.h"
#include "QTextStream"
#include "qtextstream.h"
#include "about.h";
#include "variable.h"
#include "help.h"
#include "string.h"
#include "string"
#include "parser.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     Ui::MainWindow *ui;
     int ForInt[2];
     QTreeWidgetItem *ActiveItem;
     QTreeWidgetItem *SelectedItem;
     int ComboSelItem;
     bool Xable;
     QString FileName="";
     QString Out[50];
     int CountOut=0;
     QString FileOpen="";
     QListWidgetItem *CurrentListItem = NULL;
     int level=1;
     QString LVL="";
     QString result = "";
     QString path;
     int CountOfStrings;

public slots:
   void recieveData(QString str);
   void recieveVar(QString str);


private slots:
    void on_pushButton_clicked();


    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_pushButton_8_clicked();

    void on_treeWidget_itemActivated(QTreeWidgetItem *item, int column);


    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);


    void on_lineEdit_selectionChanged();

    void on_lineEdit_2_selectionChanged();

    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);


    void on_pushButton_3_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_15_clicked();

    void on_action_triggered();

    void on_action_5_triggered();

    void on_pushButton_16_clicked();

    void Tree(QTreeWidgetItem *item, int level, QFile *file);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_action_7_triggered();

    void on_action_2_triggered();

    void on_pushButton_17_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_lineEdit_11_textChanged(const QString &arg1);

    void on_action_3_triggered();

    void TreeAnalys(QString S);

    void DoubleClickedSlot();

    void SetCurrentItem1();

    void SetCurrentItem2();

    void on_pushButton_19_clicked();

private:
//    Ui::MainWindow *ui;
    Dialog *dialog;
    About *about;
    Help *help;
    Variable *variable;

    MainWindow *m;
};

#endif // MAINWINDOW_H
