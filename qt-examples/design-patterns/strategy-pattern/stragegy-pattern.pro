TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concrete-stragegies.cpp \
        context.cpp \
        main.cpp

HEADERS += \
    concrete-strategies.hpp \
    context.hpp \
    strategy.hpp
