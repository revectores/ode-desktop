#include "ode_chart.h"


ODEChartView::ODEChartView(QWidget *parent): QChartView(parent) {
    QChart *chart = new QChart();
    this->setChart(chart);
    this->setRenderHint(QPainter::Antialiasing);

    axis_x = new QValueAxis;
    axis_y = new QValueAxis;

    axis_x->setRange(0, 10);
    axis_y->setRange(0, 10);

    this->chart()->addAxis(axis_x, Qt::AlignBottom);
    this->chart()->addAxis(axis_y, Qt::AlignLeft);
}
