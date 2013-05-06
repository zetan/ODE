#ifndef VECTOR3D_H
#define VECTOR3D_H


class Vector3D{
public:
	
	Vector3D(){}
	Vector3D(float x, float y, float z){
		this->x = x;
		this->y = y;
		this->z = z;
	}
	~Vector3D(){}
private:
	float x, y, z;
};

#endif