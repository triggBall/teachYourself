#include <iostream>
#include "Chapter3.h"

// Three Global Integers 
int firstNumber = 0; 
int secondNumber = 0; 
int multiplicationResult = 0; 

void MultiplyNumbers();
void ShowEnumeration(); 

int Chapter3()
{
	ShowEnumeration();
	MultiplyNumbers(); 
	return 0; 
}

enum CardinalDirections
{
	North = 25,
	South,
	East,
	West

};

void ShowEnumeration()
{
	std::cout << "Displaying directions and their symbolic values:" << std::endl; 
	std::cout << "North: " << North << std::endl; 
	std::cout << "South: " << South << std::endl; 
	std::cout << "East: " << East << std::endl; 
	std::cout << "West: " << West << std::endl; 

	CardinalDirections windDirection = South; 
	std::cout << "Variable windDirection = " << windDirection << std::endl;
}

void MultiplyNumbers()
{
	std::cout << "Enter the first number: ";
	std::cin >> firstNumber; 

	std::cout << "Enter the second number: "; 
	std::cin >> secondNumber; 

	// Multiply the two numbers, store the result in a variable
	multiplicationResult = firstNumber * secondNumber; 

	// Display Results
	std::cout << firstNumber << " x " << secondNumber; 
	std::cout << " = " << multiplicationResult << std::endl; 


}