QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    balancewindow.cpp \
    cashgivewindow.cpp \
    change_lang.cpp \
    checkprint.cpp \
    choicecountinuewindow.cpp \
    main.cpp \
    mainwindow.cpp \
    russian_function.cpp \
    russian_pin.cpp \
    transferwindow.cpp

HEADERS += \
    balancewindow.h \
    cashgivewindow.h \
    change_lang.h \
    checkprint.h \
    choicecountinuewindow.h \
    mainwindow.h \
    russian_function.h \
    russian_pin.h \
    transferwindow.h

FORMS += \
    balancewindow.ui \
    cashgivewindow.ui \
    change_lang.ui \
    checkprint.ui \
    choicecountinuewindow.ui \
    mainwindow.ui \
    russian_function.ui \
    russian_pin.ui \
    transferwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
