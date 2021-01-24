#include<iostream>
#include "Cube.h"
using namespace std;

Cube::Cube(double length){
	length_ = length;
}

void Cube::setLength(double length){
	length = length_;
}

double Cube::getLength() const{
	return length_;
}

double Cube::getVolume() const{
	return length_ * length_ * length_;
}

