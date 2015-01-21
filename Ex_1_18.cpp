///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_18.cpp                          			                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions. Program counts how many times	 //
// one number is entered. Prints the count as soon as another number is entered.     //
//																					 //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>

int main()
{
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) 
		{
		int cnt = 1;				// declare count for the current value
		while (std::cin >> val) 
			{						
			if (val == currVal)		// if the values are the same
				++cnt;				// add 1 to cnt
			else 
				{					// otherwise, print count for previous value
				std::cout << currVal << " occurs "	<< cnt << " times" << std::endl;
				currVal = val;		// remember the new value
				cnt = 1;			// reset counter
				}
			}						
		// print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
		}							// outermost if statement ends here

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();
	return 0;
}