#ifndef BALL_H  
#define BALL_H
#include "Vector3D.h"
#include <QGLWidget> 
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl/glut.h>
class Ball{
public:
	Ball();

	void Update();
	virtual void Draw();
	void Eular();
	void MidPoint();

	Vector3D getPos(){return pos;}
	void setPos(Vector3D pos){this->pos = pos;}
	void setPos(GLfloat x, GLfloat y, GLfloat z){pos.Set(x, y, z);}
	void setvelocity(GLfloat x, GLfloat y, GLfloat z){velocity.Set(x, y, z);}
protected:
	
	Vector3D pos;
	Vector3D velocity;
	Vector3D gravity;
	
};

#endif