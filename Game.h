#pragma once
#include "Cube.h"
#include "Stack.h"

using namespace std;

class Game{
	public:
		Game();
		void solve();
	private:
		vector <Stack> stacks_;
		void _move();
		void _moveCube(Stack &s1, Stack &s2);
