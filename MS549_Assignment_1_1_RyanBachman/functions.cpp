/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 1.1 - Test Driven Development
	functions.cpp
*/

#include <iostream>
#include <string>
#include "functions.h"

// Allows you to use iostream statements without the use of std::.
using namespace std;

// Outputs the main menu options to the user using only cout.
int mainMenu()
{
	cout << "Ryan's Super Cool Menu of Super Coolness" << endl;
	cout << "1: Calculator (+, -, *, /)" << endl;
	cout << "2: Separate Numbers (12 => 1, 2)" << endl;
	cout << "3: Exit Program" << endl;

	return 0;
}

// Takes on the user input of the sign choice and their two numbers and completes calculations based on their sign choice from the menu in main().
void calculate(int signChoice, int numOne, int numTwo)
{
	int calculatedNum;
	
	// Switch case handling options 1 through 4 which indicate what type of calculation is being done.
	// 1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division
	switch (signChoice)
	{
		case 1:
			calculatedNum = numOne + numTwo;
			cout << numOne << " + " << numTwo << " = " << calculatedNum << endl;
			cout << endl;
			break;
		case 2:
			calculatedNum = numOne - numTwo;
			cout << numOne << " - " << numTwo << " = " << calculatedNum << endl;
			cout << endl;
			break;
		case 3:
			calculatedNum = numOne * numTwo;
			cout << numOne << " * " << numTwo << " = " << calculatedNum << endl;
			cout << endl;
			break;
		case 4:
			calculatedNum = numOne / numTwo;
			cout << numOne << " / " << numTwo << " = " << calculatedNum << endl;
			cout << endl;
			break;
		default:
			break;
	}
}

// Takes a number that the user enters, converts it into a string and outputs each digit to the user using a for loop.
void separateNumbers(int splitNum)
{
	string numStr = to_string(splitNum);

	cout << "Your number broken down into digits is ";

	for (string::size_type i = 0; i < numStr.size(); ++i)
	{
		if (i == numStr.size() - 1) // If statement that makes it put commas if more numbers are in line and ending with a period if none are left.
		{
			cout << numStr[i] << ".";
		}
		else
		{
			cout << numStr[i] << ", ";
		}
	}

	cout << endl;
	cout << endl;
}