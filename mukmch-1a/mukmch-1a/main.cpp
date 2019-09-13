// File to load Mastermind game
#include <stdlib.h>
#include "code.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));

	code Coder(5, 10);

	cout << "\n\n";

	code Guesser(5, 10);
	//int i = Coder.checkCorrect(Guesser);
	cout << "\n\nIt built";

	return 0;
}