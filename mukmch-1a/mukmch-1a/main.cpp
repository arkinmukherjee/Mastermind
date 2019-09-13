// File to load Mastermind game
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>

using namespace std;

void run(){
	code Key(5, 10);
	int guess1[5] = { 5,0,3,2,6 };
	code Guess(guess1);
}

int main() {
	//srand(time(NULL));


	cout << "\n\n";

	code Guesser(5, 10);

	run();

	//int i = Coder.checkCorrect(Guesser);
	cout << "\n\nIt built";

	return 0;
}