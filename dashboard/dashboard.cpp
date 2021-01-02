#include "dashboard.h"



Dashboard::Dashboard(QWidget *parent): QWidget(parent) {
    QGridLayout *layout = new QGridLayout(this);

    ode_chart_init();
    layout->addWidget(ode_chart_view, 0, 0);
}


void Dashboard::ode_chart_init(){
    ode_chart_view = new ODEChartView(this);
}



void Dashboard::render_vector_field(){

}