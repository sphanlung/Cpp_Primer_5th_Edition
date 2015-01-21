///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_13b.cpp (Ex 1.10 rewritten)      			                         //
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
	for (int nCount = 10; nCount >= 0; --nCount)
	{
		std::cout << nCount << std::endl;
	}

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();
	return 0;
}