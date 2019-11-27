#-------------------------------------------------
#
# Project created by QtCreator 2019-11-18T13:22:46
#
#-------------------------------------------------

QT       += core gui serialport network xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = M714
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        model714data.cpp \
        model714settings.cpp \
        no2form.cpp \
        noform.cpp \
        outputno2form.cpp \
        outputnoform.cpp \
        outputozoneform.cpp \
        ozoneform.cpp \
        serialhandler.cpp \
        settingsform.cpp

HEADERS += \
        mainwindow.h \
        model714data.h \
        model714settings.h \
        no2form.h \
        noform.h \
        outputno2form.h \
        outputnoform.h \
        outputozoneform.h \
        ozoneform.h \
        serialhandler.h \
        settingsform.h

FORMS += \
        mainwindow.ui \
        no2form.ui \
        noform.ui \
        outputno2form.ui \
        outputnoform.ui \
        outputozoneform.ui \
        ozoneform.ui \
        settingsform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
