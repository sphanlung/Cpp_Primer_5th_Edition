///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_10.cpp    									                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions									 //
//																				     //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>

int main()
{
	int count = 10;		// Declare integer for count. Initialize to 50
	int sum = 0;		// Declare integer for final answer

	// Keep loop until count reaches 100
	while (count >= 0)
	{
		std::cout << count << std::endl;     // Print result count
		--count;		// Decrease count by 1
	}

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();

	return 0;
}