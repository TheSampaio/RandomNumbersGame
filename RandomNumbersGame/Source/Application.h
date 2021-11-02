#ifndef APPLICATION_CLASS_H
#define APPLICATION_CLASS_H	// Defining a Application class

#include <iostream>

class Application	// Creating a Appliaction class to include in respective ".cpp" file
{
public:
	Application();	// A constructor to initialize the class
	
	bool initialize;		// A variable to verify if the programm is runnig
	int number;				// A variable to store a random number
	std::string answer;		// A variable to verify if the user want to continue playing
	unsigned int command;	// A variable to store the user's input

	// Defining all the functions that we'll need
	void Run();
	void ShowMenu();
	void RandomNumber();
	void GetInput();
	void ProcessInput();
	void Terminate();
};

#endif // !LOG_CLASS_H
