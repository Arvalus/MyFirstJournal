// Journal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	std::cout << "Hello World!";

	for (std::string line; std::getline(std::cin, line);) 
	{
		std::cout << line << std::endl;

		if (line == "exit")
		{
			break;
		}
	}
	return 0;
}

