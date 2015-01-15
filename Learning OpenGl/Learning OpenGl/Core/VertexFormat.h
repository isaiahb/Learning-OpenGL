#pragma once
#include "IB\Vector3.h"
//using namespace IB; //probally more efficent using ::, instead of importing while library S:

struct VertexFormat{
	IB::Vector3 position;
	VertexFormat(const IB::Vector3 &position) :position(position) {}

};
