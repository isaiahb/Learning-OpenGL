#pragma once
namespace IB {
	using namespace std;
	class Vector3
	{
	public:
		float x, y, z;

		//constructors
		Vector3(float x, float y, float z);
		Vector3();
		~Vector3();

		//operator overloading
		Vector3 operator +(const Vector3&);	//add
		Vector3 operator -(const Vector3&);	//sub
		Vector3 operator *(float);		//mul
		Vector3 operator /(float);		//div
		Vector3 operator %(const Vector3&);	// cross/vector product
		float operator *(const Vector3&);	//dot product
	};
}


