///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_9.cpp    									                         //
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
	int count = 50;		// Declare integer for count. Initialize to 50
	int sum = 0;		// Declare integer for final answer

	// Keep loop until count reaches 100
	while (count <= 100)
	{
		sum += count;	// Sum equals the sum of itself and count value
		++count;		// Increase count by 1
	}

	//Print result
	std::cout << "The sum of numbers from 50 to 100 is: " << sum << std::endl; 

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();

	return 0;
}