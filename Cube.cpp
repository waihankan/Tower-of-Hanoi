#include<iostream>
#include "Cube.h"
using namespace std;

Cube::Cube(double length){
	length_ = length;
}

void Cube::setLength(double length){
	length = length_;
}

double Cube::getLength(){
	return length_;
}

double Cube::getVolume(){
	return length_ * length_ * length_;
}

