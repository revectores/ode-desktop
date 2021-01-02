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


class ODEChartView: public QChartView {
private:
    QValueAxis* axis_x;
    QValueAxis* axis_y;

public:
    ODEChartView(QWidget *parent = 0);
};
