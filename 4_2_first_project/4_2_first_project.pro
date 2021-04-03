#-------------------------------------------------
#
# Project created by QtCreator 2021-04-02T21:34:27
#
#-------------------------------------------------

QT       += core gui #QT包含的模块 核心，和图形

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets #大于4版本以上，包含widget模块

TARGET = 4_2_first_project#目标 生成的.exe名称
TEMPLATE = app #模板   应用程序模板  application

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \ # 源文件
        mywidget.cpp \
    mypushbutton.cpp

HEADERS += \
        mywidget.h \ #头文件
    mypushbutton.h
