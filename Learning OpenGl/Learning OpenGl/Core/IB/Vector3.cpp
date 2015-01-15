#include "Vector3.h"
using namespace IB;

Vector3::Vector3(): x(0), y(0), z(0){}
Vector3::Vector3(float x, float y, float z) :x(x),  y(y),  z(z){}
Vector3::~Vector3(){}

//operator overloading
//addition
Vector3 Vector3::operator+(const Vector3 &v)
{
	Vector3 temp(x + v.x, y + v.y, z + v.z);
	return temp;
}
//subtraction
Vector3 Vector3::operator-(const Vector3 &v)
{
	Vector3 temp(x - v.x, y - v.y, z - v.z);
	return temp;
}
//multiplication
Vector3 Vector3::operator *(float scalar)
{
	Vector3 temp(x * scalar, y * scalar, z * scalar);
	return temp;
}
//division
Vector3 Vector3::operator /(float scalar)
{
	Vector3 temp(x / scalar, y / scalar, z / scalar);
	return temp;
}
//dot pruduct
float Vector3::operator *(const Vector3 &v)
{
	return x * v.x + y * v.y + z * v.z;
}

//cross, vector product
Vector3 Vector3::operator %(const Vector3 &vector) 
{
	return Vector3(
		y*vector.z - z*vector.y,
		z*vector.x - x*vector.z,
		x*vector.y - y*vector.x);
}







