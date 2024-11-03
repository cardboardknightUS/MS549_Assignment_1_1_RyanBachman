/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 1.1 - Test Driven Development
	main.cpp
*/

#include <iostream>
#include <string>
#include "functions.h"

// Allows you to use iostream statements without the use of std::.
using namespace std;

// Code starts running here.
int main()
{
	bool programLoop = true; // Set a variable for looping the program.

	// Begin program loop...
	while (programLoop)
	{
		int menuChoice;

		// Display menu to the user and give them option handling.
		mainMenu();
		cout << "Please select a menu item (1 through 3): ";
		cin >> menuChoice;
		cout << endl;

		// Start handling sub-menus for different choices they have.
		if (menuChoice == 1)
		{
			int signChoice;

			cout << "Calculator" << endl;
			cout << "Please choose a sign." << endl;
			cout << "1: Add (+)" << endl;
			cout << "2: Subtract (-)" << endl;
			cout << "3: Multiply (*)" << endl;
			cout << "4: Divide (/)" << endl;
			cout << "5: End Program" << endl;
			cout << "Please select a menu item (1 through 5): ";
			cin >> signChoice;
			cout << endl;

			if (signChoice > 0 && signChoice < 5)
			{
				int numOne, numTwo;

				cout << "Please select your first number: ";
				cin >> numOne;

				cout << "Please select your second number: ";
				cin >> numTwo;
				cout << endl;

				calculate(signChoice, numOne, numTwo);
			}
			else if (signChoice == 5)
			{
				return 0;
			}
			else
			{
				cout << "Please enter a valid number from 1 to 5.\n" << endl;
			}
		}
		else if (menuChoice == 2)
		{
			int splitNum;

			cout << "Please enter the number to split digits: ";
			cin >> splitNum;

			separateNumbers(splitNum);
		}
		else if (menuChoice == 3)
		{
			return 0;
		}
		else // Basic error checking to ensure a valid number is entered into the menu.
		{
			cout << "Please enter a valid number from 1 to 3.\n" << endl;
		}
	} // ... End program loop.
	
	return 0;
}