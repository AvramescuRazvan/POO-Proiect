QT -= gui
QT += network

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        iprotocol.cpp \
        main.cpp \
        mythread.cpp \
        protocolactualizaredate.cpp \
        protocolafisareantrenament.cpp \
        protocolafisarecereriprietenie.cpp \
        protocolafisareprieteni.cpp \
        protocolconectare.cpp \
        protocolfactory.cpp \
        protocolinregistrare.cpp \
        protocolraspunscereri.cpp \
        protocolstergeprieten.cpp \
        protocoltrimitecerere.cpp \
        protocolvizualizareevolutie.cpp \
        server.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    iprotocol.h \
    mythread.h \
    protocolactualizaredate.h \
    protocolafisareantrenament.h \
    protocolafisarecereriprietenie.h \
    protocolafisareprieteni.h \
    protocolconectare.h \
    protocolfactory.h \
    protocolinregistrare.h \
    protocolraspunscereri.h \
    protocolstergeprieten.h \
    protocoltrimitecerere.h \
    protocolvizualizareevolutie.h \
    server.h

DISTFILES += \
    Conturi.txt \
    Z1 P.Tri.U..txt \
    Z1 P.Tri.U..txt \
    Z1 P.Tri.U..txt \
    Z1 P.Tri.U..txt \
    Z1 P.Tri.U.txt \
    Z1 P.Tri.U.txt \
    Z2 S.B.Tra..txt \
    Z3 P.G..txt \
    Z4 P.Tri.U..txt \
    Z5 S.B.Tra..txt \
    andrei_cereri.txt \
    andrei_prieteni.txt \
    razvan_cereri.txt \
    razvan_prieteni.txt \
    stefan.txt
