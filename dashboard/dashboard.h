#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QRadioButton>
#include <QCheckBox>
#include <QPushButton>
#include <QTableWidget>
#include <QMessageBox>
#include <QtCharts>

#include <string>
#include <revector/ode.h>
#include "ode_chart.h"


class Dashboard: public QWidget {
private:
    ODEChartView* ode_chart_view;

    void ode_chart_init();
    void render_vector_field();


public:
    Dashboard(QWidget *parent = 0);
};


