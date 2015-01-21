///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_11.cpp    									                         //
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
	int nMin = 0;				// Declare min and max integers			
	int nMax = 0;

	std::cout << "Enter lowest integer: ";
	std::cin >> nMin;			
	std::cout << "Enter highest integer: ";
	std::cin >> nMax;

	int nCount = nMin;

	// Keep loop until nCount reaches nMax
	while (nCount <= nMax)
	{
		std::cout << nCount << std::endl;     // Print result count
		++nCount;		// Increase count by 1
	}

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();

	return 0;
}