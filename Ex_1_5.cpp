///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_5.cpp    									                         //
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
	std::cout << "Enter two numbers:" << std::endl;   // Print message
	int v1 = 0, v2 = 0;								  // Declare v1,v2 as integers
	std::cin >> v1 >> v2;							  // Insert values for v1,v2
	std::cout << "The product of "; 
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl;			  

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();

	return 0;
}