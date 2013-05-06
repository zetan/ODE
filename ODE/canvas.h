#ifndef CANVAS_H  
#define CANVAS_H  

#include <QGLWidget>  
#include <GL/GLU.h>

class QTimer;  
class QKeyEvent;  

class GLCanvas : public QGLWidget  
{  
	Q_OBJECT  
public:  
	explicit GLCanvas(QWidget *parent = 0);  

protected:  
	void initializeGL();  
	void resizeGL(int w, int h);  
	void paintGL();  

	void keyPressEvent(QKeyEvent *);  
	void closeEvent(QCloseEvent *);  

public Q_SLOTS:
	void updateGL();

private:  
	QTimer *timer;  
	GLfloat left;
	bool fullscreen;  //窗口是否全屏显示  
};  

#endif // MYGLWIDGET_H  