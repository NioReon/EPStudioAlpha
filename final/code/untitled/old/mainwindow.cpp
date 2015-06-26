#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdialog.h"
#include <QInputDialog>
#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>
#include <qfile.h>
#include <qtextstream.h>
#include <string>
#include <qdialog.h>
#include <qfiledialog.h>
#include <qinputdialog.h>
#include <qmessagebox.h>
#include "about.h"
#include "qprocess.h"
#include "help.h"
#include "QKeyEvent"
#include "parser.h"
#include "cstring"
using namespace std;

//Создание окна, дезактивируем элементы
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
   // Прикрепляем виджеты к краям экрана
    QGridLayout *layout = new QGridLayout;
    ui->centralWidget->setLayout(layout);
    layout->addWidget(ui->tabWidget,0,0,1,3,Qt::AlignTop);
    layout->addWidget(ui->pushButton_7,1,0,Qt::AlignLeft);
    layout->addWidget(ui->pushButton_17,1,0, Qt::AlignRight);
    layout->addWidget(ui->label,1,1,Qt::AlignLeft);
    layout->addWidget(ui->widget,1,1,Qt::AlignRight);
    layout->addWidget(ui->listWidget,3,0,Qt::AlignLeft);
    layout->addWidget(ui->treeWidget,3,1);//), Qt::AlignHCenter);
    layout->addWidget(ui->toolBox,3,2,Qt::AlignRight);
    QHBoxLayout *layout2 = new QHBoxLayout;
    ui->tab->setLayout(layout2);
    layout2->setGeometry(QRect(0,20,689,50));
    layout2->addWidget(ui->pushButton,0,Qt::AlignCenter);
    layout2->addWidget(ui->pushButton_2,0,Qt::AlignCenter);
    layout2->addWidget(ui->pushButton_3,0,Qt::AlignCenter);
    layout2->addWidget(ui->pushButton_4,0,Qt::AlignCenter);
    layout2->addWidget(ui->pushButton_5,0,Qt::AlignCenter);
    layout2->addWidget(ui->pushButton_6,0,Qt::AlignCenter);

    dialog = new Dialog;
    dialog->setWindowTitle("Добавить подпрограмму");
    about = new About;
    help = new Help;
    variable = new Variable;
    dialog->setWindowIcon(QIcon("pic/plus.png"));
    QObject::connect(ui->pushButton_7, SIGNAL(clicked(bool)), dialog, SLOT(show()));
    QObject::connect(dialog, SIGNAL(sendData(QString)), this , SLOT(recieveData(QString)));
    QObject::connect(ui->action_6,SIGNAL(triggered(bool)),about,SLOT(show()));
    QObject::connect(ui->action_4,SIGNAL(triggered(bool)),help, SLOT(show()));
    QObject::connect(ui->pushButton_18, SIGNAL(clicked(bool)),variable,SLOT(show()));
    QObject::connect(variable,SIGNAL(sendData(QString)),this,SLOT(recieveVar(QString)));

    //Кнопочки все дезактивируем
    ui->pushButton->setEnabled(!true);
    ui->pushButton_2->setEnabled(!true);
    ui->pushButton_3->setEnabled(!true);
    ui->pushButton_4->setEnabled(!true);
    ui->pushButton_5->setEnabled(!true);
    ui->pushButton_6->setEnabled(!true);
    //Иконочки

    ui->pushButton->setIcon(QIcon("pic/for.png"));
    ui->pushButton->setIconSize(QSize(25,25));

    ui->pushButton_2->setIcon(QIcon("pic/if.png"));
    ui->pushButton_2->setIconSize(QSize(25,25));

    ui->pushButton_3->setIcon(QIcon("pic/while.png"));
    ui->pushButton_3->setIconSize(QSize(50,50));

    ui->pushButton_4->setIcon(QIcon("pic/123.png"));
    ui->pushButton_4->setIconSize(QSize(50,50));

    ui->pushButton_5->setIcon(QIcon("pic/write.png"));
    ui->pushButton_5->setIconSize(QSize(50,50));

    ui->pushButton_6->setIcon(QIcon("pic/read.png"));
    ui->pushButton_6->setIconSize(QSize(50,50));

    ui->pushButton_7->setIcon(QIcon("pic/plus.png"));
    ui->pushButton_7->setIconSize(QSize(16,16));

    ui->pushButton_10->setIcon(QIcon("pic/delete.png"));
    ui->pushButton_10->setIconSize(QSize(16,16));

    ui->pushButton_17->setIcon(QIcon("pic/delete.png"));
    ui->pushButton_17->setIconSize(QSize(16,16));

    ui->pushButton_11->setIcon(QIcon("pic/root.png"));
    ui->pushButton_11->setIconSize(QSize(16,16));

    ui->pushButton_16->setIcon(QIcon("pic/Build.png"));
    ui->pushButton_16->setIconSize(QSize(35,35));

    ui->pushButton_18->setIcon(QIcon("pic/plus.png"));
    ui->pushButton_18->setIconSize(QSize(16,16));

    ui->label_21->setPixmap(QPixmap("pic/1.png"));

    MainWindow::setWindowIcon(QIcon("pic/1.png"));
    MainWindow::setMinimumSize(765,562);
    MainWindow::setMaximumSize(765,562);

    //Дезактивируем основное окно
    ui->treeWidget->setEnabled(false);
    ui->widget->setDisabled(true);

    //По умолчанию ставим верхнюю открытую вкладку
    ui->toolBox->setCurrentIndex(0);

    //Дезактивируем все кнопочки на тулбоксе
      //for
    ui->pushButton_8->setDisabled(true);
    ui->lineEdit->setDisabled(true);
    ui->lineEdit_2->setDisabled(true);
    ui->lineEdit_11->setDisabled(true);
      //if
    ui->pushButton_9->setDisabled(true);
    ui->lineEdit_3->setDisabled(true);
    ui->lineEdit_4->setDisabled(true);
    ui->comboBox->setDisabled(true);
      //while
    ui->pushButton_12->setDisabled(true);
    ui->lineEdit_5->setDisabled(true);
    ui->lineEdit_6->setDisabled(true);
    ui->comboBox_2->setDisabled(true);
      //x=
    ui->pushButton_13->setDisabled(true);
    ui->lineEdit_7->setDisabled(true);
    ui->lineEdit_8->setDisabled(true);
      //write
    ui->pushButton_14->setDisabled(true);
    ui->lineEdit_9->setDisabled(true);
     //read
    ui->pushButton_15->setDisabled(true);
    ui->lineEdit_10->setDisabled(true);

    ui->toolBox->setDisabled(true);
    ComboSelItem = 0;
    ForInt[0]=0;
    ForInt[1]=0;
    SelectedItem = NULL;
    Xable = false;
    //Делаем невидимыми все кнопочки
    ui->toolBox->setVisible(false);
    ui->listWidget->setVisible(false);
    ui->tabWidget->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_10->setVisible(false);
    ui->treeWidget->setVisible(false);
    ui->pushButton_17->setVisible(false);

    //Горячие клавиши
     //удалить
    QAction *Del = new QAction("HotKey",0);
    Del->setShortcut(QKeySequence(Qt::Key_Delete));
    connect(Del,SIGNAL(triggered(bool)),ui->pushButton_10,SLOT(click()));
    MainWindow::addAction(Del);
     //войти в элемент
    QAction *Ent = new QAction("HotKey2",0);
    Ent->setShortcut((QKeySequence(Qt::Key_Return)));
    QObject::connect(Ent,SIGNAL(triggered(bool)), this, SLOT(DoubleClickedSlot()));
    MainWindow::addAction(Ent);
     //цикл for
    QAction *fo = new QAction("HotKey",0);
    fo->setShortcut(QKeySequence(Qt::Key_1));
    connect(fo,SIGNAL(triggered(bool)), ui->pushButton, SLOT(click()));
    MainWindow::addAction(fo);
     //if
    QAction *iff = new QAction("HotKey",0);
    iff->setShortcut(QKeySequence(Qt::Key_2));
    connect(iff,SIGNAL(triggered(bool)), ui->pushButton_2, SLOT(click()));
    MainWindow::addAction(iff);
    //цикл while
    QAction *wh = new QAction("HotKey",0);
    wh->setShortcut(QKeySequence(Qt::Key_3));
    connect(wh,SIGNAL(triggered(bool)), ui->pushButton_3, SLOT(click()));
    MainWindow::addAction(wh);
    //x=
    QAction *x = new QAction("HotKey",0);
    x->setShortcut(QKeySequence(Qt::Key_4));
    connect(x,SIGNAL(triggered(bool)), ui->pushButton_4, SLOT(click()));
    MainWindow::addAction(x);
    //write
    QAction *write = new QAction("HotKey",0);
    write->setShortcut(QKeySequence(Qt::Key_5));
    connect(write,SIGNAL(triggered(bool)), ui->pushButton_5, SLOT(click()));
    MainWindow::addAction(write);
    //read
    QAction *read = new QAction("HotKey",0);
    read->setShortcut(QKeySequence(Qt::Key_6));
    connect(read,SIGNAL(triggered(bool)), ui->pushButton_6, SLOT(click()));
    MainWindow::addAction(read);
    //добавить переменную
    QAction *Add = new QAction("HotKey",0);
    Add->setShortcut(QKeySequence("SHIFT+A"));
    connect(Add,SIGNAL(triggered(bool)), ui->pushButton_18, SLOT(click()));
    MainWindow::addAction(Add);
    //Перейти в корень дерева
    QAction *root = new QAction("HotKey",0);
    root->setShortcut(QKeySequence(Qt::Key_Escape));
    connect(root,SIGNAL(triggered(bool)), ui->pushButton_11, SLOT(click()));
    MainWindow::addAction(root);
    //Переключиться между вкладками
    QAction *swi = new QAction("HotKey",0);
    swi->setShortcut(QKeySequence("CTRL+1"));
    connect(swi,SIGNAL(triggered(bool)), this, SLOT(SetCurrentItem1()));
    MainWindow::addAction(swi);
    QAction *swi2 = new QAction("HotKey",0);
    swi2->setShortcut(QKeySequence("CTRL+2"));
    connect(swi2,SIGNAL(triggered(bool)), this, SLOT(SetCurrentItem2()));
    MainWindow::addAction(swi2);

    //Скомпилировать
    QAction *compile = new QAction("HotKey",0);
    compile->setShortcut(QKeySequence("F9"));
    connect(compile,SIGNAL(triggered(bool)), ui->pushButton_16, SLOT(click()));
    MainWindow::addAction(compile);

    //Добавить подпрограмму
    QAction *AddP = new QAction("HotKey",0);
    AddP->setShortcut(QKeySequence("SHIFT+N"));
    connect(AddP,SIGNAL(triggered(bool)), ui->pushButton_7, SLOT(click()));
    MainWindow::addAction(AddP);

    //Сохранить проект
    QAction *Save = new QAction("HotKey",0);
    Save->setShortcut(QKeySequence("CTRL+S"));
    connect(Save,SIGNAL(triggered(bool)), ui->action_2, SLOT(trigger()));
    MainWindow::addAction(Save);

    //Новый проект
    QAction *New = new QAction("HotKey",0);
    New->setShortcut(QKeySequence("CTRL+N"));
    connect(New,SIGNAL(triggered(bool)), ui->action, SLOT(trigger()));
    MainWindow::addAction(New);

    //Открыть проект
    QAction *Open = new QAction("HotKey",0);
    Open->setShortcut(QKeySequence("CTRL+O"));
    connect(Open,SIGNAL(triggered(bool)), ui->action_3, SLOT(trigger()));
    MainWindow::addAction(Open);
    //

    //Загружаем source файлы
    LoadTemplate("source/Template/loop.txt");
    LoadTemplate("source/Template/condition.txt");
    LoadTemplate("source/Template/while.txt");
    LoadTemplate("source/Template/assume.txt");
    LoadTemplate("source/Template/write.txt");
    LoadTemplate("source/Template/read.txt");
    LoadTemplate("source/Template/then.txt");
    LoadTemplate("source/Template/else.txt");
    LoadTemplate("source/Template/define_var.txt");
    LoadTemplate("source/Template/main.txt");

}
MainWindow::~MainWindow()
{
    delete ui;
}

//принимаем данные о названии программы из Dialog
void MainWindow::recieveData(QString str)
{
   QListWidgetItem *func = new QListWidgetItem;
   func->setText(str);
   ui->pushButton_7->setDisabled(true);
   ui->listWidget->addItem(func);
   if (FileName!="")
   {
    FileName.operator +=("/");
   }
   FileName.operator +=(str);
   FileOpen = FileName;
   path = FileName;
   path.operator +=(".cpp");
   FileOpen.operator +=(".epp");
   FileName.operator +=(".epc");

}

//ЦИКЛ FOR
void MainWindow::on_pushButton_clicked()
{
    QString S ="for";
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        SelectedItem->setExpanded(true);
    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
        }
        else ui->treeWidget->addTopLevelItem(parent);
    }
}
//Двойной клик по подпрограмме
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
      ui->label->setText(item->text());

      //а потом снова их активируем, по двойному щелчку на подпрограмме
      ui->pushButton->setEnabled(true);
      ui->pushButton_2->setEnabled(true);
      ui->pushButton_3->setEnabled(true);
      ui->pushButton_4->setEnabled(true);
      ui->pushButton_5->setEnabled(true);
      ui->pushButton_6->setEnabled(true);

      //Активируем окно
      ui->treeWidget->setEnabled(true);
          ui->widget->setDisabled(false);


      //Активируем тулбокс
      ui->toolBox->setEnabled(true);

}

//Двойной щелщок по итему
void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    ActiveItem = NULL;
    QString S = item->text(0);
    QString str = S;
    str.remove(2,S.length()-2);

  //Если двойной щелчок на for
    if (str=="fo")
    {
       //активируем кнопочки
        ui->pushButton_8->setEnabled(true);
        ui->lineEdit->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_11->setEnabled(true);
        if (S.length()>3)
        {
              ui->lineEdit->setText(QString::number(ForInt[0]));
              ui->lineEdit_2->setText(QString::number(ForInt[1]));
        }
      //текущий активный итем
        ActiveItem = item;
        ui->toolBox->setCurrentIndex(1);

      //дезактивируем всё остальное
          //if
        ui->pushButton_9->setDisabled(true);
        ui->lineEdit_3->setDisabled(true);
        ui->lineEdit_4->setDisabled(true);
        ui->comboBox->setDisabled(true);
          //while
        ui->pushButton_12->setDisabled(true);
        ui->lineEdit_5->setDisabled(true);
        ui->lineEdit_6->setDisabled(true);
        ui->comboBox_2->setDisabled(true);
          //x=
        ui->pushButton_13->setDisabled(true);
        ui->lineEdit_7->setDisabled(true);
        ui->lineEdit_8->setDisabled(true);
        //write
        ui->pushButton_14->setDisabled(true);
        ui->lineEdit_9->setDisabled(true);
        //read
        ui->pushButton_15->setDisabled(true);
        ui->lineEdit_10->setDisabled(true);
        Xable = false;
    }

  //Если двойной щелчок на if
    if (str=="if")
    {
     //активируем кнопочки
        ui->pushButton_9->setEnabled(true);
        ui->lineEdit_3->setEnabled(true);
        ui->lineEdit_4->setEnabled(true);
        ui->comboBox->setEnabled(true);
        ActiveItem=item;
        ui->toolBox->setCurrentIndex(2);

     //дезактивируем все остальные
        //for
        ui->pushButton_8->setDisabled(true);
        ui->lineEdit->setDisabled(true);
        ui->lineEdit_2->setDisabled(true);
        ui->lineEdit_11->setDisabled(true);
        //while
        ui->pushButton_12->setDisabled(true);
        ui->lineEdit_5->setDisabled(true);
        ui->lineEdit_6->setDisabled(true);
        ui->comboBox_2->setDisabled(true);
        //x=
        ui->pushButton_13->setDisabled(true);
        ui->lineEdit_7->setDisabled(true);
        ui->lineEdit_8->setDisabled(true);
        //write
        ui->pushButton_14->setDisabled(true);
        ui->lineEdit_9->setDisabled(true);
        //read
        ui->pushButton_15->setDisabled(true);
        ui->lineEdit_10->setDisabled(true);
        Xable = true;

    }

    //Если двойной щелчок на while
    if (str=="wh")
    {
      //активируем кнопочки
        ui->pushButton_12->setEnabled(true);
        ui->lineEdit_5->setEnabled(true);
        ui->lineEdit_6->setEnabled(true);
        ui->comboBox_2->setEnabled(true);
     //текущий активный итем
        ActiveItem = item;
     //Открываем тулбокс
        ui->toolBox->setCurrentIndex(3);
     //Дезактивируем остальные кнопочки
        //for
        ui->pushButton_8->setDisabled(true);
        ui->lineEdit->setDisabled(true);
        ui->lineEdit_2->setDisabled(true);
        ui->lineEdit_11->setDisabled(true);
        //if
        ui->pushButton_9->setDisabled(true);
        ui->lineEdit_3->setDisabled(true);
        ui->lineEdit_4->setDisabled(true);
        ui->comboBox->setDisabled(true);
        //x=
        ui->pushButton_13->setDisabled(true);
        ui->lineEdit_7->setDisabled(true);
        ui->lineEdit_8->setDisabled(true);
        //write
        ui->pushButton_14->setDisabled(true);
        ui->lineEdit_9->setDisabled(true);
        //read
        ui->pushButton_15->setDisabled(true);
        ui->lineEdit_10->setDisabled(true);
        Xable = false;
    }

   //Если двойной щелчок на x=
   if (S.count("=")>0)
   {
     //активируем кнопочки
        ui->pushButton_13->setEnabled(true);
        ui->lineEdit_7->setEnabled(true);
        ui->lineEdit_8->setEnabled(true);
     //Текущий активный итем
        ActiveItem = item;
     //Открываем тулбокс
        ui->toolBox->setCurrentIndex(4);
     //Дезактивируем всё остальное
        //for
        ui->pushButton_8->setDisabled(true);
        ui->lineEdit->setDisabled(true);
        ui->lineEdit_2->setDisabled(true);
        ui->lineEdit_11->setDisabled(true);
        //if
        ui->pushButton_9->setDisabled(true);
        ui->lineEdit_3->setDisabled(true);
        ui->lineEdit_4->setDisabled(true);
        ui->comboBox->setDisabled(true);
        //while
        ui->pushButton_12->setDisabled(true);
        ui->lineEdit_5->setDisabled(true);
        ui->lineEdit_6->setDisabled(true);
        ui->comboBox_2->setDisabled(true);
        //write
        ui->pushButton_14->setDisabled(true);
        ui->lineEdit_9->setDisabled(true);
        //read
        ui->pushButton_15->setDisabled(true);
        ui->lineEdit_10->setDisabled(true);
        Xable = true;
   }

   //Если двойной щелчок на write
    if (str=="wr")
    {
      //активируем кнопочки
         ui->pushButton_14->setEnabled(true);
         ui->lineEdit_9->setEnabled(true);
      //Текущий активный итем
         ActiveItem = item;
      //Открываем тулбокс
         ui->toolBox->setCurrentIndex(5);
      //Дезактивируем всё остальное
         //for
         ui->pushButton_8->setDisabled(true);
         ui->lineEdit->setDisabled(true);
         ui->lineEdit_2->setDisabled(true);
         ui->lineEdit_11->setDisabled(true);
         //if
         ui->pushButton_9->setDisabled(true);
         ui->lineEdit_3->setDisabled(true);
         ui->lineEdit_4->setDisabled(true);
         ui->comboBox->setDisabled(true);
         //while
         ui->pushButton_12->setDisabled(true);
         ui->lineEdit_5->setDisabled(true);
         ui->lineEdit_6->setDisabled(true);
         ui->comboBox_2->setDisabled(true);
         //x=
         ui->pushButton_13->setDisabled(true);
         ui->lineEdit_7->setDisabled(true);
         ui->lineEdit_8->setDisabled(true);
         //read
         ui->pushButton_15->setDisabled(true);
         ui->lineEdit_10->setDisabled(true);
         Xable = true;
    }
  //Если двойной щелчок на read
    if (str=="re")
    {
      //активируем кнопочки
        ui->pushButton_15->setEnabled(true);
        ui->lineEdit_10->setEnabled(true);
      //Текущий активный итем
        ActiveItem = item;
      //Открываем тулбокс
        ui->toolBox->setCurrentIndex(6);
      //Дезактивируем всё остальное
        //for
        ui->pushButton_8->setDisabled(true);
        ui->lineEdit->setDisabled(true);
        ui->lineEdit_2->setDisabled(true);
        ui->lineEdit_11->setDisabled(true);
        //if
        ui->pushButton_9->setDisabled(true);
        ui->lineEdit_3->setDisabled(true);
        ui->lineEdit_4->setDisabled(true);
        ui->comboBox->setDisabled(true);
        //while
        ui->pushButton_12->setDisabled(true);
        ui->lineEdit_5->setDisabled(true);
        ui->lineEdit_6->setDisabled(true);
        ui->comboBox_2->setDisabled(true);
        //x=
        ui->pushButton_13->setDisabled(true);
        ui->lineEdit_7->setDisabled(true);
        ui->lineEdit_8->setDisabled(true);
        //write
        ui->pushButton_14->setDisabled(true);
        ui->lineEdit_9->setDisabled(true);
        Xable= true;
    }
    if (str=="ad")
    {
        Xable = true;
    }
}

//for_Сохранение параметров цикла for
void MainWindow::on_pushButton_8_clicked()
{
    if ((ui->lineEdit->text()!="")&&(ui->lineEdit_2->text()!="")&&(ui->lineEdit_11->text()!=""))
    {
        ForInt[0]=ui->lineEdit->text().toInt(0,10);
        ForInt[1]=ui->lineEdit_2->text().toInt(0,10);
        QString S ="for";
        S.operator +=(" (");
        S.operator +=(ui->lineEdit_11->text());
        S.operator +=(";");
        S.operator +=(QString::number(ForInt[0]));
        S.operator +=(";");
        S.operator +=(QString::number(ForInt[1]));
        S.operator +=(")");
        ActiveItem->setText(0,S);
        ui->pushButton_8->setDisabled(true);
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_11->setText("");
        ui->lineEdit->setDisabled(true);
        ui->lineEdit_2->setDisabled(true);
        ui->lineEdit_11->setDisabled(true);
    }
}

void MainWindow::on_treeWidget_itemActivated(QTreeWidgetItem *item, int column)
{
    SelectedItem=item;
}

//Меняем текущий выделенный элемент по одному клику
void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    SelectedItem=item;
    QString S = item->text(0);
    QString str = S;
    if ((str.count("=")>0)||(str.count("if")>0)||(str.count("write")>0)||(str.count("read")>0)||(str.count("add"))>0)
    {
        Xable = true;
    }
    else Xable = false;
}


void MainWindow::on_lineEdit_selectionChanged()
{
        ui->lineEdit->setText("");
}

void MainWindow::on_lineEdit_2_selectionChanged()
{
        ui->lineEdit_2->setText("");
}


//ОПЕРАТОР IF
void MainWindow::on_pushButton_2_clicked()
{
    QString S ="if";
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    QTreeWidgetItem *then = new QTreeWidgetItem;
    QTreeWidgetItem *els = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        child->addChild(then);
        then->setText(0,"then");
        child->addChild(els);
        els->setText(0,"else");
        SelectedItem->setExpanded(true);
    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
            child->addChild(then);
            then->setText(0,"then");
            child->addChild(els);
            els->setText(0,"else");
            SelectedItem=SelectedItem->parent();

        }
        else
        {
            ui->treeWidget->addTopLevelItem(parent);
            parent->addChild(then);
            parent->addChild(els);
            then->setText(0,"then");
            els->setText(0,"else");
        }
    }

    }



//IF_Сохранение параметров оператора if
void MainWindow::on_pushButton_9_clicked()
{
    if ((ui->lineEdit_3->text()!="")&&(ui->lineEdit_4->text()!=""))
    {
        QString S ="if";
        S.operator +=(" (");
        S.operator +=(ui->lineEdit_3->text());
        S.operator +=(ui->comboBox->itemText(ComboSelItem));
        S.operator +=(ui->lineEdit_4->text());
        S.operator +=(")");
        ActiveItem->setText(0,S);
        ui->pushButton_9->setDisabled(true);
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_3->setDisabled(true);
        ui->lineEdit_4->setDisabled(true);
        ui->comboBox->setDisabled(true);
    }
}
//IF_Отслеживаем, какой элемент в комбобоксе выделен
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ComboSelItem = index;
}

//Снять выделение со всех элементов
void MainWindow::on_pushButton_11_clicked()
{
    if (SelectedItem!=NULL)
    {
          SelectedItem->setSelected(false);
          SelectedItem=NULL;
    }
}

//Удалить текущий элемент дерева
void MainWindow::on_pushButton_10_clicked()
{
    if (SelectedItem!=NULL)
    {
        delete SelectedItem;
        SelectedItem=NULL;
    }
}

//Меняем выделенный элемент, когда он сам перескакивает
void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    SelectedItem = current;
    ui->toolBox->setCurrentIndex(0);
    //Дезактивируем все кнопочки на тулбоксе
      //for
    ui->pushButton_8->setDisabled(true);
    ui->lineEdit->setDisabled(true);
    ui->lineEdit_2->setDisabled(true);
    ui->lineEdit_11->setDisabled(true);
      //if
    ui->pushButton_9->setDisabled(true);
    ui->lineEdit_3->setDisabled(true);
    ui->lineEdit_4->setDisabled(true);
    ui->comboBox->setDisabled(true);
      //while
    ui->pushButton_12->setDisabled(true);
    ui->lineEdit_5->setDisabled(true);
    ui->lineEdit_6->setDisabled(true);
    ui->comboBox_2->setDisabled(true);
      //x=
    ui->pushButton_13->setDisabled(true);
    ui->lineEdit_7->setDisabled(true);
    ui->lineEdit_8->setDisabled(true);
      //write
    ui->pushButton_14->setDisabled(true);
    ui->lineEdit_9->setDisabled(true);
     //read
    ui->pushButton_15->setDisabled(true);
    ui->lineEdit_10->setDisabled(true);
}

//ОПЕРАТОР WHILE
void MainWindow::on_pushButton_3_clicked()
{
    QString S ="while";
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        SelectedItem->setExpanded(true);
    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
        }
        else ui->treeWidget->addTopLevelItem(parent);
    }

}

//WHILE_Сохранение параметров while
void MainWindow::on_pushButton_12_clicked()
{
    if ((ui->lineEdit_5->text()!="")&&(ui->lineEdit_6->text()!=""))
    {
        QString S ="while";
        S.operator +=(" (");
        S.operator +=(ui->lineEdit_5->text());
        S.operator +=(ui->comboBox_2->itemText(ComboSelItem));
        S.operator +=(ui->lineEdit_6->text());
        S.operator +=(")");
        ActiveItem->setText(0,S);
        ui->pushButton_12->setDisabled(true);
        ui->lineEdit_5->setText("");
        ui->lineEdit_6->setText("");
        ui->lineEdit_5->setDisabled(true);
        ui->lineEdit_6->setDisabled(true);
        ui->comboBox_2->setDisabled(true);
    }
}

//X=_ОПЕРАТОР X=
void MainWindow::on_pushButton_4_clicked()
{
    QString S =" = ";
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        SelectedItem->setExpanded(true);

    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
        }
        else ui->treeWidget->addTopLevelItem(parent);
    }
    Xable = true;
}

//Х=_Сохранение параметров Х=
void MainWindow::on_pushButton_13_clicked()
{
    if ((ui->lineEdit_7->text()!="")&&(ui->lineEdit_8->text()!=""))
    {
        QString S;
        S.operator +=(ui->lineEdit_7->text());
        S.operator +=(" = ");
        S.operator +=(ui->lineEdit_8->text());
        ActiveItem->setText(0,S);
        ui->pushButton_13->setDisabled(true);
        ui->lineEdit_7->setText("");
        ui->lineEdit_8->setText("");
        ui->lineEdit_7->setDisabled(true);
        ui->lineEdit_8->setDisabled(true);
        Xable = true;
    }

}
//WRITE_Оператор Write
void MainWindow::on_pushButton_5_clicked()
{
    QString S ="write";
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        SelectedItem->setExpanded(true);
    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
        }
        else ui->treeWidget->addTopLevelItem(parent);
    }
       Xable = true;
}


//WRITE_Сохранение параметров Write
void MainWindow::on_pushButton_14_clicked()
{
    if (ui->lineEdit_9->text()!="")
    {
        QString S = "write (";
        S.operator +=(ui->lineEdit_9->text());
        S.operator +=(")");
        ActiveItem->setText(0,S);
        ui->pushButton_14->setDisabled(true);
        ui->lineEdit_9->setText("");
        ui->lineEdit_9->setDisabled(true);
        Xable = true;
    }
}

//READ_Оператор Read
void MainWindow::on_pushButton_6_clicked()
{
    QString S ="read";
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        SelectedItem->setExpanded(true);
    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
        }
        else ui->treeWidget->addTopLevelItem(parent);
    }
        Xable = true;
}


//READ_Сохранение параметров Read
void MainWindow::on_pushButton_15_clicked()
{
    if (ui->lineEdit_10->text()!="")
    {
        QString S = "read (";
        S.operator +=(ui->lineEdit_10->text());
        S.operator +=(")");
        ActiveItem->setText(0,S);
        ui->pushButton_15->setDisabled(true);
        ui->lineEdit_10->setText("");
        ui->lineEdit_10->setDisabled(true);
           Xable = true;
    }
}
//Создать новый проект
void MainWindow::on_action_triggered()
{
    FileName = QFileDialog::getExistingDirectory(0, "Укажите имя папки", "");
    if (!(FileName.isEmpty()))
    {
      MainWindow::setMinimumSize(0,0);
      MainWindow::setMaximumSize(16777215,16777215);
      ui->listWidget->clear();
      ui->treeWidget->clear();
      ui->treeWidget->setDisabled(true);
      ui->widget->setDisabled(true);
      ui->toolBox->setDisabled(true);
      ui->pushButton_2->setDisabled(true);
      ui->pushButton_3->setDisabled(true);
      ui->pushButton_4->setDisabled(true);
      ui->pushButton_5->setDisabled(true);
      ui->pushButton_6->setDisabled(true);
      ui->pushButton->setDisabled(true);
      ui->label->setText("");
      // Делаем видимыми все кнопки
      ui->toolBox->setVisible(true);
      ui->listWidget->setVisible(true);
      ui->tabWidget->setVisible(true);
      ui->pushButton_7->setVisible(true);
      ui->pushButton_11->setVisible(true);
      ui->pushButton_18->setVisible(true);
      ui->pushButton_10->setVisible(true);
      ui->treeWidget->setVisible(true);
      ui->pushButton_17->setVisible(true);
      ui->pushButton_7->setEnabled(true);
      //картинки
      ui->label_22->setVisible(false);
      ui->label_21->setVisible(false);
    }
}

//закрыть проект
void MainWindow::on_action_5_triggered()
{
    //Делаем невидимыми все кнопочки
    ui->toolBox->setVisible(false);
    ui->listWidget->setVisible(false);
    ui->tabWidget->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_10->setVisible(false);
    ui->treeWidget->setVisible(false);
    ui->pushButton_17->setVisible(false);
    ui->label->setVisible(false);
    ui->label->setText("");
    ui->treeWidget->clear();
    ui->listWidget->clear();
    MainWindow::setMinimumSize(765,562);
    MainWindow::setMaximumSize(765,562);
    //картинки
    ui->label_22->setVisible(true);
    ui->label_21->setVisible(true);
    CurrentListItem = NULL;
}

//Эта функция перебирает всё дерево по элементам и записывает его в массив строк Out
void MainWindow::Tree(QTreeWidgetItem *item, int level, QFile *file)
{
    level++;
    QTextStream stream(file);
    int max = item->childCount();  //Смотрим, сколько дочерних элементов
    for (int i=0; i<max;i++)      // и перебираем их все
    {
       //Записываем в файл данные, если for
        if (item->child(i)->text(0).count("for")>0)
        {
            Out[CountOut].operator +=("0 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            QString parametr3;
            int index;
            int index2;
            S=item->child(i)->text(0);
            if (S.length()>3)
            {
              Out[CountOut].operator +=(" 3 ");
              S.remove(0,5);
              index = S.indexOf(";");
              parametr1=S;
              parametr3=S;
              parametr2=S;
              parametr1.remove(index,S.length());
              parametr2.remove(0,index+1);
              parametr3.remove(0,index+1);
              index2 = parametr2.indexOf(";");
              parametr2.remove(index2, parametr2.length());
              parametr3.remove(0,index2+1);
              parametr3.remove(parametr3.length()-1,1);
              Out[CountOut].operator +=(QString::number(parametr1.length()));
              Out[CountOut].operator +=(" ");
              Out[CountOut].operator +=(parametr1);
              Out[CountOut].operator +=(" ");
              Out[CountOut].operator +=(QString::number(parametr2.length()));
              Out[CountOut].operator +=(" ");
              Out[CountOut].operator +=(parametr2);
              Out[CountOut].operator +=(" ");
              Out[CountOut].operator +=(QString::number(parametr3.length()));
              Out[CountOut].operator +=(" ");
              Out[CountOut].operator +=(parametr3);
            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;

        }
      //Записываем в файл данные, если X=
        if (item->child(i)->text(0).count("=")>0)
        {
            Out[CountOut].operator +=("3 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            int index;
            S = item->child(i)->text(0);
            if (S.length()>3)
            {
                Out[CountOut].operator +=(" 2 ");
                parametr1=S;
                parametr2=S;
                index=S.indexOf("=");
                parametr1.remove(index-1,S.length());
                parametr2.remove(0,index+2);
                Out[CountOut].operator +=(QString::number(parametr1.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr1);
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(QString::number(parametr2.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr2);
            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;
        }
      //Записываем в файл данные, если if
        if (item->child(i)->text(0).count("if")>0)
        {
            Out[CountOut].operator +=("1 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            QString parametr3;
            int index;
            S = item->child(i)->text(0);
            if (S.length()>2)
            {
                S.remove(0,4);
                Out[CountOut].operator +=(" 3 ");
                parametr1=S;
                parametr2=S;
                parametr3=S;
                if (S.count("<"))
                {
                  index=(S.indexOf("<"));
                  parametr2="<";
                }
                if (S.count(">")>0)
                {
                  index=(S.indexOf(">"));
                  parametr2=">";
                }
                if (S.count("=")>0)
                {
                  index=(S.indexOf("="));
                  parametr2="=";
                }
                if (S.count("≥")>0)
                {
                  index=(S.indexOf("≥"));
                  parametr2=">=";
                }
                if (S.count("≤")>0)
                {
                  index=(S.indexOf("≤"));
                  parametr2="<=";
                }
                if (S.count("≠")>0)
                {
                  index=(S.indexOf("≠"));
                  parametr2="!=";
                }
                parametr1.remove(index,S.length());
                parametr3.remove(0,index+1);
                parametr3.remove(parametr3.length()-1,1);
                Out[CountOut].operator +=(QString::number(parametr1.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr1);
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(QString::number(parametr2.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr2);
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(QString::number(parametr3.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr3);
            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;
        }
     //Записываем в файл данные, если while
        if (item->child(i)->text(0).count("while")>0)
        {
            Out[CountOut].operator +=("2 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            QString parametr3;
            int index;
            S = item->child(i)->text(0);
            if (S.length()>5)
            {
                S.remove(0,7);
                Out[CountOut].operator +=(" 3 ");
                parametr1=S;
                parametr2=S;
                parametr3=S;
                if (S.count("<"))
                {
                  index=(S.indexOf("<"));
                  parametr2="<";
                }
                if (S.count(">")>0)
                {
                  index=(S.indexOf(">"));
                  parametr2=">";
                }
                if (S.count("=")>0)
                {
                  index=(S.indexOf("="));
                  parametr2="=";
                }
                if (S.count("≥")>0)
                {
                  index=(S.indexOf("≥"));
                  parametr2=">=";
                }
                if (S.count("≤")>0)
                {
                  index=(S.indexOf("≤"));
                  parametr2="<=";
                }
                if (S.count("≠")>0)
                {
                  index=(S.indexOf("≠"));
                  parametr2="!=";
                }
                parametr1.remove(index,S.length());
                parametr3.remove(0,index+1);
                parametr3.remove(parametr3.length()-1,1);
                Out[CountOut].operator +=(QString::number(parametr1.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr1);
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(QString::number(parametr2.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr2);
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(QString::number(parametr3.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr3);
            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;
        }
      //Записываем в файл данные, если write
        if (item->child(i)->text(0).count("write")>0)
        {
            Out[CountOut].operator +=("4 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            int index;
            S = item->child(i)->text(0);
            if (S.length()>5)
            {
                S.remove(0,7);
                Out[CountOut].operator +=(" 1 ");
                parametr1=S;
                parametr1.remove(parametr1.length()-1,1);
                Out[CountOut].operator +=(QString::number(parametr1.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr1);
            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;
        }
      //Записываем в файл данные, если read
        if (item->child(i)->text(0).count("read")>0)
        {
            Out[CountOut].operator +=("5 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            int index;
            S = item->child(i)->text(0);
            if (S.length()>4)
            {
                S.remove(0,6);
                Out[CountOut].operator +=(" 1 ");
                parametr1=S;
                parametr1.remove(parametr1.length()-1,1);
                Out[CountOut].operator +=(QString::number(parametr1.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr1);
            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;
        }
        if (item->child(i)->text(0).count("then")>0)
        {
            Out[CountOut].operator +=("6 ");
            Out[CountOut].operator +=(QString::number(level));
            Out[CountOut].operator +=(" 0");
            CountOut++;
        }
        if (item->child(i)->text(0).count("else")>0)
        {
            Out[CountOut].operator +=("7 ");
            Out[CountOut].operator +=(QString::number(level));
            Out[CountOut].operator +=(" 0");
            CountOut++;
        }
        if (item->child(i)->text(0).count("add")>0)
        {
            Out[CountOut].operator +=("8 ");
            Out[CountOut].operator +=(QString::number(level));
            QString S;
            QString parametr1;
            QString parametr2;
            int index;
            S = item->child(i)->text(0);
            if (S.length()>4)
            {
                S.remove(0,4);
                Out[CountOut].operator +=(" 2 ");
                parametr1=S;
                parametr1.remove(parametr1.indexOf(" "), parametr1.length());
                parametr2=S;
                parametr2.remove(0, parametr2.indexOf(" ")+1);
                Out[CountOut].operator +=(QString::number(parametr1.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr1);
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(QString::number(parametr2.length()));
                Out[CountOut].operator +=(" ");
                Out[CountOut].operator +=(parametr2);

            }
            else Out[CountOut].operator +=(" 0");
            CountOut++;

        }
        MainWindow::Tree(item->child(i), level, *(&file));    //для каждого дочернего элемента рекурсивно всё повторяем
    }
}

//Запись в файл (компиляция)
void MainWindow::on_pushButton_16_clicked()
{
    QFile file;
    if ((ui->listWidget->count()==0))
    {
        QMessageBox::warning(this, "Внимание!", "Создайте как минимум одну подпрограмму");
    }
    else
    if (ui->treeWidget->invisibleRootItem()->childCount()==0)
    {
       QMessageBox::warning(this, "Внимание!", "Добавьте хотя бы один оператор в основную рабочую область");
    }
    else
   {
    file.setFileName(FileName);
    if (file.exists())
    {
        QFile::remove(FileName);
    }
    file.open(QFile::WriteOnly | QFile::Text);
    int level = -1;
    QTextStream f(&file);
    MainWindow::Tree(ui->treeWidget->invisibleRootItem(), level, &file);
    for (int i=0;i<CountOut;i++)
    {
        f<<Out[i]<<"\n";
       // Out[i]="";
    }
    CountOfStrings = CountOut;
    CountOut=0;
    file.flush();
    file.close();
    file.setFileName(FileOpen);
    file.open(QFile::WriteOnly | QFile::Text);
    if (file.exists())
    {
        QFile::remove(FileOpen);
    }
    QTextStream f1(&file);
    f<<ui->listWidget->item(0)->text();
    file.flush();
    file.close();
    QMessageBox::information(this,"Компиляция завершена успешно!", "Файл скомпилирован!\nТеперь вы можете запустить программу, нажав 'Run'");
   }

}

//Проверяем в комбобоксе на смену итема
void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
     ComboSelItem = index;
}

//Закрыть программу
void MainWindow::on_action_7_triggered()
{
   close();
}

//Сохранить файл
void MainWindow::on_action_2_triggered()
{
    if (FileName!="")
    {
    ui->pushButton_16->click();
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    if (CurrentListItem != NULL)
    {
       delete CurrentListItem;
       CurrentListItem=NULL;
       ui->treeWidget->clear();
       ui->treeWidget->setDisabled(true);
       ui->widget->setDisabled(true);
       ui->pushButton->setDisabled(true);
       ui->pushButton_2->setDisabled(true);
       ui->pushButton_3->setDisabled(true);
       ui->pushButton_4->setDisabled(true);
       ui->pushButton_5->setDisabled(true);
       ui->pushButton_6->setDisabled(true);
       ui->pushButton_7->setEnabled(true);
       ui->label->setText(" ");
       CurrentListItem = NULL;
    }
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
        CurrentListItem = item;
}

//проверка корректности ввода переменной
void MainWindow::on_lineEdit_11_textChanged(const QString &arg1)
{
    if (ui->lineEdit->text().toInt())
        ui->lineEdit->setText("");
}

//Анализируем дерево (какой элемент нужно добавлять -- дочерний или нет)
void MainWindow::TreeAnalys(QString S)
{
   QStringList List = S.split(" ");
   int i = -1;
   QString Operator;
   QString write = S;
   bool quote = false;
   if (S.count('"')>0)
   {
       write.remove(0,write.indexOf('"')+1);
       write.remove(write.indexOf('"'),write.length());
       quote = true;
   }
   if (List.at(0)=="0")
   {
       Operator = "for";
       if (List.at(2).toInt(0,10)!=0)
       {
          Operator.operator +=(" (");
          Operator.operator +=(List.at(4));
          Operator.operator +=(";");
          Operator.operator +=(List.at(6));
          Operator.operator +=(";");
          Operator.operator +=(List.at(8));
          Operator.operator +=(")");
       }
   }
   if (List.at(0)=="1")
   {
       Operator = "if";
       if (List.at(2).toInt(0,10)!=0)
       {
         Operator.operator +=(" (");
         Operator.operator +=(List.at(4));
         Operator.operator +=(List.at(6));
         Operator.operator +=(List.at(8));
         Operator.operator +=(")");
       }
   }
   if (List.at(0)== "2")
   {
       Operator = "while";
       if (List.at(2).toInt(0,10)!=0)
       {
         Operator.operator +=(" (");
         Operator.operator +=(List.at(4));
         Operator.operator +=(List.at(6));
         Operator.operator +=(List.at(8));
         Operator.operator +=(")");
       }

   }
   if (List.at(0)=="3")
   {
       if (List.at(2).toInt(0,10)!=0)
       {
        Operator.operator +=(List.at(4));
        Operator.operator +=(" = ");
        Operator.operator +=(List.at(6));
       }
       else Operator.operator +=(" = ");
   }
   if (List.at(0)=="4")
   {
       Operator = "write";
       if (List.at(2).toInt(0,10)!=0)
       {
           Operator.operator +=(" (");
           if (quote)
           {
               Operator.operator +=('"');
               Operator.operator +=(write);
               Operator.operator +=('"');
           }
           else Operator.operator +=(List.at(4));
           Operator.operator +=(")");
       }
   }
   if (List.at(0)=="5")
   {
       Operator = "read";
       if (List.at(2).toInt(0,10)!=0)
       {
           Operator.operator +=(" (");
           Operator.operator +=(List.at(4));
           Operator.operator +=(")");
       }
   }
   if (List.at(0)=="6")
   {
       Operator = "then";
   }
   if (List.at(0)=="7")
   {
       Operator = "else";
   }
   if (List.at(0)=="8")
   {
       Operator.operator +=("add ");
       Operator.operator +=(List.at(4));
       Operator.operator +=(" ");
       Operator.operator +=(List.at(6));
   }

   result = Operator;
   if (List.at(1).toInt(0,10)==1)
   {
       LVL = "root";
       level=1;
   }
   else if (List.at(1).toInt(0,10)>level)
           {
              LVL = ">";
              level++;
           }
        else if (List.at(1).toInt(0,10)<level)
                {
                   LVL="<";
                   level--;
                }
             else if (List.at(1).toInt(0,10)==level)
                   {
                      LVL = "=";
                   }
 }


//Открыть проект
void MainWindow::on_action_3_triggered()
{
   ui->treeWidget->clear();
   ui->listWidget->clear();
   FileOpen = QFileDialog::getOpenFileName(0,"Выберите файл проекта", "", "*.epp");
   if (!(FileOpen.isEmpty()))
   {
     MainWindow::setMinimumSize(0,0);
     MainWindow::setMaximumSize(16777215,16777215);
     QString fopen;
     fopen = FileOpen;
     QFile file;
     QFile file2;
     file.setFileName(FileOpen);
     file.open(QFile::ReadOnly | QFile::Text);
     QTextStream stream(&file);
     QString S;
     QString name;
     int index;
     index = fopen.lastIndexOf("/");
     fopen.remove(index+1,fopen.length());
     while (!(stream.atEnd()))
     {
         stream>>S;
         name = S;
         index = S.lastIndexOf("/");
         S.remove(index, S.length());
         index = S.indexOf(".");
         S.remove(index,4);
         ui->listWidget->addItem(name);
         fopen.operator +=(name);
         fopen.operator +=(".epc");
         FileName = fopen;
         file2.setFileName(fopen);
         file2.open(QFile::ReadOnly | QFile::Text);
         QTextStream stream2(&file2);
         QString Tree;
         QTreeWidgetItem *parent = new QTreeWidgetItem;
         QTreeWidgetItem *child = new QTreeWidgetItem;
         QTreeWidgetItem *current = new QTreeWidgetItem;
         while (!(stream2.atEnd()))
         {
             Tree = stream2.readLine();
             TreeAnalys(Tree);
             if (LVL.count("root")>0)
             {
                 QTreeWidgetItem *n = new QTreeWidgetItem;
                 n->setText(0,result);
                 ui->treeWidget->addTopLevelItem(n);
                 current = n;
             }
             else
             if (LVL.count(">")>0)
             {
                 QTreeWidgetItem *child = new QTreeWidgetItem;
                 child->setText(0,result);
                 current->addChild(child);
                 current = child;
             }
             else
             if (LVL.count("=")>0)
             {
                parent = current->parent();
                QTreeWidgetItem *child = new QTreeWidgetItem;
                child->setText(0,result);
                parent->addChild(child);
                current = child;

             }
            else
            if (LVL.count("<")>0)
            {
                 QTreeWidgetItem *parent2 = new QTreeWidgetItem;
                 parent = current->parent();
                 parent2 = parent->parent();
                 child->setText(0,result);
                 parent2->addChild(child);
                 current = child;
            }
       }
   }
   ui->listWidget->item(0)->setSelected(true);
   ui->label->setText(ui->listWidget->item(0)->text());
   ui->treeWidget->setDisabled(false);
   ui->widget->setDisabled(false);
   ui->toolBox->setDisabled(false);
   ui->pushButton_2->setDisabled(false);
   ui->pushButton_3->setDisabled(false);
   ui->pushButton_4->setDisabled(false);
   ui->pushButton_5->setDisabled(false);
   ui->pushButton_6->setDisabled(false);
   ui->pushButton->setDisabled(false);
   ui->pushButton_7->setDisabled(true);
   // Делаем видимыми все кнопки
   ui->toolBox->setVisible(true);
   ui->listWidget->setVisible(true);
   ui->tabWidget->setVisible(true);
   ui->pushButton_7->setVisible(true);
   ui->pushButton_11->setVisible(true);
   ui->pushButton_18->setVisible(true);
   ui->pushButton_10->setVisible(true);
   ui->treeWidget->setVisible(true);
   ui->pushButton_17->setVisible(true);
   //картинки
   ui->label_22->setVisible(false);
   ui->label_21->setVisible(false);
   ui->pushButton_11->click();
 }
}
void MainWindow::recieveVar(QString str)
{

    QString S ="add ";
    S.operator +=(str);
    QTreeWidgetItem *parent = new QTreeWidgetItem;
    QTreeWidgetItem *child = new QTreeWidgetItem;
    parent->setText(0,S);
    if ((SelectedItem!=NULL)&&(!Xable))
    {
        SelectedItem->addChild(child);
        child->setText(0,S);
        SelectedItem->setExpanded(true);
    }
    else
    {
        if ((SelectedItem!=NULL)&&(SelectedItem->parent()))
        {
            SelectedItem->parent()->addChild(child);
            child->setText(0,S);
        }
        else ui->treeWidget->addTopLevelItem(parent);
    }
}

void MainWindow::DoubleClickedSlot()
{
  ui->treeWidget->itemDoubleClicked(SelectedItem,0);
}

void MainWindow::SetCurrentItem1()
{
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::SetCurrentItem2()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_19_clicked()
{
    string s;
    code c;
    CodeBlock *cb = new CodeBlock;
    cb->block_type = 9;
    for (int i=0; i<CountOfStrings;i++)
    {
      s=Out[i].toStdString();
      AddCodeString(cb, s);
    }
    c = Compile(cb);
    const char* str = path.toStdString().c_str();
    SaveCode(c, str);
    char* str2 = (char*)str;    //str2 - путь к cpp файлу в char*


    EasyCompile("source/MinGW/bin/g++",str2);
  //  EasyRunExe("MinGW\\bin\\g++","test.cpp -o test.exe");
}
