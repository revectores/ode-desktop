QT += widgets
QT += charts
QT += core

LIBS += -lode -L/usr/local/lib/revector
INCLUDEPATH += /usr/local/include
INCLUDEPATH += "dashboard"
INCLUDEPATH += "widgets/ode_chart/"

SOURCES += "main.cpp"
SOURCES += "dashboard/dashboard.h"
SOURCES += "dashboard/dashboard.cpp"
SOURCES += "widgets/ode_chart/ode_chart.h"
SOURCES += "widgets/ode_chart/ode_chart.cpp"

