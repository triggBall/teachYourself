#include <iostream>
#include <string>
#include "Chapter2.h"


int Chapter2(); 
void Hello(); 
void DemoConsoleOutput(); 
int helloInput(); 

int Chapter2()
{
	Hello(); 
	DemoConsoleOutput(); 
	helloInput(); 
	return 0; 
}
void Hello()
{
	std::cout << "Hello World!" << std::endl; 
}

// Page 24
void DemoConsoleOutput() 
{
	std::cout << "This is a simple string literal" << std::endl;
	std::cout << "Writing number five " << 5 << std::endl; 
	std::cout << "Performing division 10 / 5 = " << 10 / 5 << std::endl; 
	std::cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << std::endl; 
	std::cout << "Pi is 22 / 7 " << 22.0 / 7 << std::endl; 
}

// Page 27 
int helloInput()
{
	// Declare a variable to store an integer. 
	int inputNumber;

	std::cout << "Enter an integer: ";
	// Store integer given by the user. 
	std::cin >> inputNumber; 

	// Same idea, but with a string. 
	std::string inputName; 
	std::cout << "Enter your name: "; 
	std::cin >> inputName;

	std::cout << inputName << " entered " << inputNumber << std::endl; 
	return 0; 
}