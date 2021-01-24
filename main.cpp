#include <iostream>
#include "Game.h"
using namespace std;

int main(){
	Game g;
	cout << "Initial Game State: " << endl;
	cout << g << endl;
	g.solve();
	cout << "Final Solved Game State: " << endl;
	cout << g << endl;
	
	return 0;
}


