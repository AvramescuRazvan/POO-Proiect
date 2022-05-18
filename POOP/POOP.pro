QT += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    client.cpp \
    csend.cpp \
    isend.cpp \
    main.cpp \
    mainwindow.cpp \
    sendacceptare_respingere.cpp \
    sendactualizaredate.cpp \
    sendamuitatparola.cpp \
    sendantrenament.cpp \
    sendautentificare.cpp \
    sendevolutieprieten.cpp \
    sendinformatii.cpp \
    sendinregistrare.cpp \
    sendlistaprieteni.cpp \
    sendprieten.cpp \
    sendstergere.cpp \
    sendvizualizareevolutie.cpp

HEADERS += \
    client.h \
    csend.h \
    isend.h \
    mainwindow.h \
    sendacceptare_respingere.h \
    sendactualizaredate.h \
    sendamuitatparola.h \
    sendantrenament.h \
    sendautentificare.h \
    sendevolutieprieten.h \
    sendinformatii.h \
    sendinregistrare.h \
    sendlistaprieteni.h \
    sendprieten.h \
    sendstergere.h \
    sendvizualizareevolutie.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
