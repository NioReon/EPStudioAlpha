#-------------------------------------------------
#
# Project created by QtCreator 2015-05-22T20:08:05
#
#-------------------------------------------------

QT       += core gui
QT += webkit webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    about.cpp \
    help.cpp \
    variable.cpp \
    parser.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    about.h \
    help.h \
    variable.h \
    parser.h

FORMS    += mainwindow.ui \
    dialog.ui \
    about.ui \
    help.ui \
    variable.ui
