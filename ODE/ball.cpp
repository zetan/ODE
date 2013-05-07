#include "ball.h"

Ball::Ball(){
	pos.x = 0;
	pos.y = 10;
	pos.z = 0;
	velocity.x = 30;
	velocity.y = 10;
	velocity.z = 10;

	gravity.x = 0;
	gravity.y = -10;
	gravity.z = 0;
}

void Ball::Draw(){
	glLoadIdentity();
	GLfloat mat_diffuse[] = {0.5, 0.5, 1.0, 1.0};
	GLfloat mat_specular[] = {1.0, 1.0, 1.0, 1.0};  
	GLfloat mat_shininess[] = {50.0};
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);  
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);  
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess); 
	glPushMatrix();
	glTranslatef(pos.x, pos.y, pos.z);
	glutSolidSphere(2, 016, 16);
	//glTranslatef(-pos.x, -pos.y, -pos.z);
	glPopMatrix();
}

void Ball::Update(){
	Eular();
}


void Ball::Eular(){
	GLfloat t = 0.1f;
	GLfloat air = -0.1f;
	GLfloat airD = velocity.Length()*air;
	Vector3D a = Vector3D::Add(Vector3D::Scale(velocity,air), gravity);
	pos = Vector3D::Add(pos, Vector3D::Scale(velocity, t));
	velocity =  Vector3D::Add(velocity,  Vector3D::Scale(a, t));
	if(pos.y < 0 && velocity.y < 0) {
		velocity.y = - velocity.y;
		velocity = Vector3D::Scale(velocity,0.5);
	}
}

void Ball::MidPoint(){}
