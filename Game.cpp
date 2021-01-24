#include <iostream>
#include "Cube.h"
#include "Game.h"
#include "Stack.h"
#include <vector>

Game::Game(){
	for (int i=0;i < 3; i++){
		Stack stackofCubes;
		stacks_.push_back(stackofCubes);
	}

	// push 4 cube into stacks_[0]
	
	Cube cube1(4);
	stacks_[0].addCube(cube1);

	Cube cube2(3);
	stacks_[0].addCube(cube2);

	Cube cube3(2);
	stacks_[0].addCube(cube3);

	Cube cube4(1);
	stacks_[0].addCube(cube4);
}

void Game::solve(){
	_move(0, stacks_[0].stackSize()-1, stacks_[0], stacks_[2], stacks_[1]);

}

void Game::_moveCube(Stack &s1, Stack &s2){
	Cube cube = s1.removeTop();
	s2.addCube(cube);
}

void Game::_move(unsigned start, unsigned end, Stack &source, Stack &target, Stack &auxiliary){
	if (start == end){
		_moveCube(source, target);
		cout << *this << endl;
	}else{
		_move(start+1, end, source, auxiliary, target);
		_move(start, start, source, target, auxiliary);
		_move(start+1, end, auxiliary, target, source);
	}
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
	  for (unsigned i = 0; i < game.stacks_.size(); i++) {
		      os << "Stack[" << i << "]: " << game.stacks_[i];
		        }
	    return os;
}

