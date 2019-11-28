#-------------------------------------------------
#
# Project created by QtCreator 2019-11-27T16:31:00
#
#-------------------------------------------------

QT       += core gui serialport network xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Model714
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
        NO/noform.cpp \
        NO/outputnoform.cpp \
        NO2/no2form.cpp \
        NO2/outputno2form.cpp \
        Ozone/outputozoneform.cpp \
        Ozone/ozoneform.cpp \
        Settings/NO/highnocalform.cpp \
        Settings/NO/lownocalform.cpp \
        Settings/NO/nocalform.cpp \
        Settings/settingsform.cpp \
        main.cpp \
        mainwindow.cpp \
        model714data.cpp \
        model714settings.cpp \
        serialhandler.cpp

HEADERS += \
        NO/noform.h \
        NO/outputnoform.h \
        NO2/no2form.h \
        NO2/outputno2form.h \
        Ozone/outputozoneform.h \
        Ozone/ozoneform.h \
        Settings/NO/highnocalform.h \
        Settings/NO/lownocalform.h \
        Settings/NO/nocalform.h \
        Settings/settingsform.h \
        mainwindow.h \
        model714data.h \
        model714settings.h \
        serialhandler.h

FORMS += \
        NO/noform.ui \
        NO/outputnoform.ui \
        NO2/no2form.ui \
        NO2/outputno2form.ui \
        Ozone/outputozoneform.ui \
        Ozone/ozoneform.ui \
        Settings/NO/highnocalform.ui \
        Settings/NO/lownocalform.ui \
        Settings/NO/nocalform.ui \
        Settings/settingsform.ui \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
