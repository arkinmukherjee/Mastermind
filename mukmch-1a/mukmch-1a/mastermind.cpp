// mastermind.cpp
// Author: Blake McHale and Arkin Mukherjee
// Date: 9/20/2019
// Project 1b

// Libraries and header files
#include "mastermind.h"
#include "code.h"
#include <vector>
#include <iostream>
#include <ctime>

// Standard namespace
using namespace std;

void mastermind::gameSetter()
{
	int n, m;
	char setGame;

	srand(time(NULL));
	cout << "Would you like to set up the game? (Y/N): ";
	cin >> setGame;
	setGame = toupper(setGame);

	if (setGame)
	{
		cout << "Enter the code length: ";
		cin >> n;
		cout << "Enter the range of digit: ";
		cin >> m;
		code Key(n, m);
	}
	else
	{
		code Key(5, 10);
	}
}

