#pragma once
#include "Vector3.h"
#include <string>
#include <sstream>

class Quaternion {
public:
	//Constructor Functions
	Quaternion(float wIn = 0.f, float xIn = 0.f, float yIn = 0.f, float zIn = 0.f);

	//Getter Functions
	float GetW();
	float GetX();
	float GetY();
	float GetZ();

	//Output Functions
	std::string ToString();

	//Operator Overloads
	Quaternion operator+(Quaternion q2);
	Quaternion operator-(Quaternion q2);
	Quaternion operator*(Quaternion q2);

	//Modification Functions
	float Modulus();
	Quaternion Normalise();
	Quaternion Negate();
	Quaternion Conjugate();
	Quaternion Scale(float scaleValue);
	Quaternion Inverse();

	//Rotation Functions
	MyVector3 Rotate(MyVector3 vectorToRotate, float angle);
	static MyVector3 RotateAboutX(MyVector3 vectorToRotate, float angle);
	static MyVector3 RotateAboutY(MyVector3 vectorToRotate, float angle);
	static MyVector3 RotateAboutZ(MyVector3 vectorToRotate, float angle);


private:
	float m_w;
	float m_x;
	float m_y;
	float m_z;
};