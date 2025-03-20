QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addnewuser.cpp \
    main.cpp \
    mainwindow.cpp \
    transfermoney.cpp \
    useraccount.cpp

HEADERS += \
    addnewuser.h \
    mainwindow.h \
    transfermoney.h \
    useraccount.h

FORMS += \
    addnewuser.ui \
    mainwindow.ui \
    transfermoney.ui \
    useraccount.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    images/Screenshot 2025-03-19 202201 (1).png
