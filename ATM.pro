QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountstatment.cpp \
    antheramount.cpp \
    changepassowrd.cpp \
    dialog.cpp \
    dipoet.cpp \
    main.cpp \
    intro_page.cpp \
    moneytransfer.cpp \
    thankyou.cpp \
    withdraw.cpp

HEADERS += \
    accountstatment.h \
    antheramount.h \
    changepassowrd.h \
    dialog.h \
    dipoet.h \
    intro_page.h \
    moneytransfer.h \
    thankyou.h \
    withdraw.h

FORMS += \
    accountstatment.ui \
    antheramount.ui \
    changepassowrd.ui \
    dialog.ui \
    dipoet.ui \
    intro_page.ui \
    moneytransfer.ui \
    thankyou.ui \
    withdraw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourses.qrc
