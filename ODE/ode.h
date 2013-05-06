#ifndef ODE_H
#define ODE_H

#include <QtWidgets/QMainWindow>
#include "ui_ode.h"
#include "canvas.h"
class ODE : public QMainWindow
{
	Q_OBJECT

public:
	ODE(QWidget *parent = 0);
	~ODE();

private:
	Ui::ODEClass ui;
	GLCanvas* canvas;
};

#endif // ODE_H
