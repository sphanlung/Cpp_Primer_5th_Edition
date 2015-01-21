///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_19.cpp                          			                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions. Rewrites exercise 1.11 to check   //
// if value entered for nMin is smaller than nMax.								     //
//																					 //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>

int main()
{
	int nMin = 0;				// Declare min and max integers			
	int nMax = 0;

	std::cout << "Enter lowest integer: ";
	std::cin >> nMin;
	std::cout << "Enter highest integer: ";
	std::cin >> nMax;

	if (nMin < nMax)
	{
		int nCount = nMin;

		// Keep loop until nCount reaches nMax
		while (nCount <= nMax)
		{
			std::cout << nCount << std::endl;     // Print result count
			++nCount;		// Increase count by 1
		}
	}
	else
		std::cout << "Error: Lowest value entered is larger than highest value";

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();

	return 0;
}