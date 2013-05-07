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
public slots:
	void BallStartPlay();
	void BallStopPlay();
	void BallSetHeight();
	void BallSetVxzAngle();
	void BallSetVyAngle();
	void BallSetEularMethod();
	void BallSetMidPointMethod();
private:
	Ui::ODEClass ui;
	GLCanvas* canvas;
	
};

#endif // ODE_H
