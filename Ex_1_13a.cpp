///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_13a.cpp (Ex 1.9	rewritten)      			                         //
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
	int nSum = 0;

	for (int nCount = 50; nCount <= 100; ++nCount)
	{
		nSum += nCount;
	}

	std::cout << "The sum of numbers from 50 to 100 is: " << nSum << std::endl;

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();

	return 0;
}