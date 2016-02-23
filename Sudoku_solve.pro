#-------------------------------------------------
#
# Project created by QtCreator 2015-12-19T19:24:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku_solve
TEMPLATE = app

INCLUDEPATH += C:/boost/boost_1_60_0
LIBS += "-LC:/boost/boost_1_60_0/stage/lib/"

SOURCES += main.cpp \
        mainwindow.cpp \
    graphe.cpp \
    case.cpp \
    sudoku.cpp \
    filedepriorite.cpp

HEADERS  += mainwindow.h \
    graphe.h \
    case.h \
    sudoku.h \
    base.h \
    filedepriorite.h

FORMS    += mainwindow.ui
