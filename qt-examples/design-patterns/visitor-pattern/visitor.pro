TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        engine.cpp \
        inspector.cpp \
        main.cpp \
        operator.cpp \
        transmission.cpp \
        wheel.cpp

HEADERS += \
    car-part-visitor.hpp \
    car-part.hpp \
    engine.hpp \
    inspector.hpp \
    operator.hpp \
    transmission.hpp \
    wheel.hpp
