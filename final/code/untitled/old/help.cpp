#include "help.h"
#include "ui_help.h"
#include "qurl.h"
#include "QtWebView/QtWebView"
#include "QtWebView/qtwebviewversion.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    Help::setWindowTitle("Руководство пользователя");
    Help::setWindowIcon(QIcon("pic/1.png"));
    QUrl url = QUrl::fromLocalFile( QDir::current().absoluteFilePath("source/Guide.html") );
    ui->webView->setUrl(url);
}

Help::~Help()
{
    delete ui;
}
