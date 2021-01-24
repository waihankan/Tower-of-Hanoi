#include<iostream>
#include "Cube.h"
#include "Stack.h"

using namespace std;

void Stack::addCube(const Cube & cube){
	cubes_.push_back(cube);
}

Cube& Stack::peekTop(){
	return cubes_[cubes_.size() - 1];
}

Cube Stack::removeTop(){
	Cube cube = peekTop();
	cubes_.pop_back();
	return cube;
}

unsigned Stack::stackSize() const{
	return cubes_.size();
}


