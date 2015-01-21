///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_13c.cpp (Ex 1.11 rewritten)      			                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions 									 //
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

	for (int nCount = nMin; nCount <= nMax; ++nCount)
	{
		std::cout << nCount << std::endl;
	}

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();
	return 0;
}