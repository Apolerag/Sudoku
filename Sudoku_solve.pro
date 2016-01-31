#-------------------------------------------------
#
# Project created by QtCreator 2015-12-19T19:24:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku_solve
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    graphe.cpp \
    case.cpp \
    sudoku.cpp

HEADERS  += mainwindow.h \
    graphe.h \
    case.h \
    sudoku.h \
    base.h

FORMS    += mainwindow.ui
