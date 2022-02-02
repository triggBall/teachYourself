#include <iostream>
#include "Chapter2.h"


int Chapter2(); 
void Hello(); 
void DemoConsoleOutput(); 

int Chapter2()
{
	Hello(); 
	DemoConsoleOutput(); 
	return 0; 
}
void Hello()
{
	std::cout << "Hello World!" << std::endl; 
}

void DemoConsoleOutput()
{
	std::cout << "This is a simple string literal" << std::endl;
	std::cout << "Writing number five " << 5 << std::endl; 
	std::cout << "Performing division 10 / 5 = " << 10 / 5 << std::endl; 
	std::cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << std::endl; 
	std::cout << "Pi is 22 / 7 " << 22.0 / 7 << std::endl; 
}
