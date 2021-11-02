#include <Windows.h>		// Including the Windows header file to use Sleep function
#include "Application.h"	// Including the defined Application class

#define TIME 2000			// Defining a macro to paste our time value

Application::Application()	// Programming the class's constructor
{
	initialize = true;
	number = 0;
	answer = "y";
	command = 0;
}

void Application::ShowMenu() // Programming the class's menu
{
	std::cout << "-------------------------" << std::endl;
	std::cout << " Random Numbers With C++ " << std::endl;
	std::cout << "-------------------------" << std::endl << std::endl;
	std::cout << "Whitch number am I? ";
}

void Application::RandomNumber() // Programming the class's random number generator
{
	srand((unsigned)time(0));
	number = (rand() % 100) + 1;
}

void Application::GetInput() // Programming the class's get input function
{
	std::cin >> command;
}

void Application::ProcessInput() // Programming the class's input processor
{
	std::cout << "" << std::endl;

	if (command < number)
	{
		std::cout << "Please, try a bigger number" << std::endl << std::endl;
	}

	else if (command > number)
	{
		std::cout << "Please, try a smaller number" << std::endl << std::endl;
	}

	else
	{
		std::cout << "Awesome, you made it!" << std::endl;
		Sleep(TIME);
		std::cout << "Would you like to try again (y/n)? ";
		std::cin >> answer;
	}
}

void Application::Run() // Here we actually run the program
{
	RandomNumber();

	while (initialize)
	{
		ShowMenu();
		GetInput();
		ProcessInput();

		Sleep(TIME);
		system("cls");

		if (answer == "n" || answer == "N")
		{
			Terminate();
		}
	}
}

void Application::Terminate() // // Programming the class's "destructor"
{
	initialize = false;
}