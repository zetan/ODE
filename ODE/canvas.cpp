#include "canvas.h"  
#include <QTimer>  
#include <QKeyEvent>  
#include <QMessageBox>  
#include <QApplication>  
#include <QDebug>  

GLCanvas::GLCanvas(QWidget *parent) :  
QGLWidget(parent), fullscreen(false)  
{  
	setWindowTitle(tr("nehe----lesson01"));  
	timer = new QTimer(this);  
	connect(timer, SIGNAL(timeout()), this, SLOT(updateGL())); //不停刷新窗口  
	timer->start(10);  

	left = -1.5f;
}  

void GLCanvas::initializeGL()  
{  
	glShadeModel(GL_SMOOTH);   // Enables Smooth Shading  
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);  // Black Background  
	glClearDepth(1.0f);             // Depth Buffer Setup  
	glEnable(GL_DEPTH_TEST);        // Enables Depth Testing  
	glDepthFunc(GL_LEQUAL);        // The Type Of Depth Test To Do  
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); // Really Nice Perspective Calculations  
}  

void GLCanvas::resizeGL(int width, int height)  
{  
	if (height==0) {    // Prevent A Divide By Zero By  
		height=1;    // Making Height Equal One  
	}  
	glViewport(0, 0, width, height);    // Reset The Current Viewport  
	glMatrixMode(GL_PROJECTION);       // Select The Projection Matrix  
	glLoadIdentity();                  // Reset The Projection Matrix  

	// Calculate The Aspect Ratio Of The Window  
	gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);  

	glMatrixMode(GL_MODELVIEW);      // Select The Modelview Matrix  
	glLoadIdentity();                // Reset The Modelview Matrix  
}  

void GLCanvas::paintGL()  
{  

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  // Clear The Screen And The Depth Buffer  
	glLoadIdentity();       // Reset The Current Modelview Matrix  

	glTranslatef(-1.5f,0.0f,-6.0f);     // Move Left 1.5 Units And Into The Screen 6.0  
	glBegin(GL_TRIANGLES);                      // Drawing Using Triangles  
	glVertex3f( left, 1.0f, 0.0f);              // Top  
	glVertex3f(-1.0f,-1.0f, 0.0f);              // Bottom Left  
	glVertex3f( 1.0f,-1.0f, 0.0f);              // Bottom Right  
	glEnd();                            // Finished Drawing The Triangle  

	glTranslatef(3.0f,0.0f,0.0f);                   // Move Right 3 Units  
	glBegin(GL_QUADS);                      // Draw A Quad  
	glVertex3f(-1.0f, 1.0f, 0.0f);              // Top Left  
	glVertex3f( 1.0f, 1.0f, 0.0f);              // Top Right  
	glVertex3f( 1.0f,-1.0f, 0.0f);              // Bottom Right  
	glVertex3f(-1.0f,-1.0f, 0.0f);              // Bottom Left  
	glEnd();     
//	glFlush();
}  

void GLCanvas::updateGL(){
	left += 0.3f;
	update();
}


void GLCanvas::keyPressEvent(QKeyEvent *e)  
{  
	switch (e->key()) {  
	case Qt::Key_F:  //F 键进行全屏切换  
		updateGL();
		break;  
	case Qt::Key_Escape:   //退出确认  
		QMessageBox::StandardButton reply;  
		reply = QMessageBox::question(NULL, "NeHe",  
			"Do you want to exit?",  
			QMessageBox::Yes | QMessageBox::No,  
			QMessageBox::Yes);  
		if (reply == QMessageBox::Yes) {  
			qApp->quit();  
		}  
		break;  
	default:  
		QGLWidget::keyPressEvent(e);  
		break;  
	}  
}  
  
void GLCanvas::closeEvent(QCloseEvent *e)  
{  
	
}  