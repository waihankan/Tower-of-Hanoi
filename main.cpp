#include <iostream>
#include "Game.h"
using namespace std;

int main(){
	Game g;
	cout << "Initial Game State: " << g << endl;
	g.solve();
	cout << "Final Solved Game State: " << g << endl;
	
	return 0;
}


