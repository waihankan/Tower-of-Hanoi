#pragma once
#include "Cube.h"
#include <vector>

class Stack{
	public:
		void addCube(const Cube & cube);
		Cube &peekTop();
		Cube removeTop();
		unsigned stackSize() const;
		friend std::ostream& operator<<(std::ostream & os, const Stack & stack);
	private:
		std::vector <Cube> cubes_;
};
