#include "ode.h"

ODE::ODE(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	canvas = new GLCanvas(ui.centralWidget);
	canvas->setGeometry(0,0, 600, 400);
}

ODE::~ODE()
{

}
