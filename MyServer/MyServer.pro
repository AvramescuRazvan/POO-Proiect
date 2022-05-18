QT -= gui
QT += network

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        mythread.cpp \
        protocol.cpp \
        server.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    mythread.h \
    protocol.h \
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
