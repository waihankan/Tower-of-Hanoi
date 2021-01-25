#pragma once
#include "Stack.h"
#include <vector>

using namespace std;

class Game{
	public:
		Game();
		void solve();
		friend std::ostream& operator<<(std::ostream & os, const Game & game);
	private:
		vector <Stack> stacks_;
		void _move(unsigned n, Stack &source, Stack &target, Stack &auxiliary);
		void _moveCube(Stack &s1, Stack &s2);
};
