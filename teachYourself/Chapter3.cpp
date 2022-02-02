#include <iostream>
#include "Chapter3.h"

// Three Global Integers 
int firstNumber = 0; 
int secondNumber = 0; 
int multiplicationResult = 0; 

void MultiplyNumbers();

int Chapter3()
{
	MultiplyNumbers(); 
	return 0; 
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