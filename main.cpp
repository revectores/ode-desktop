#include <QApplication>
#include "dashboard.h"

int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    Dashboard window;

    window.resize(1080, 550);
    window.setWindowTitle("Ordinary Differential Equation Solver");
    window.show();

    return app.exec();
}
