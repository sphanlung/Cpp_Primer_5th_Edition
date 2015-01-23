///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_20.cpp                          			                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions. Reads a book sales transaction    //
// and then prints it. Header files Sales_item.h and Version_test.h must be placed   //
// in project folder.																 //
// Transaction sample (ISBN, units sold, price): 0-201-78345-X 3 20.00				 //
//																					 //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>
#include "Sales_item.h"				// Header provided by book author

int main()
{
	Sales_item item1, item2;
	
	std::cout << "Enter ISBN, books sold and price:";
	std::cin >> item1;

	std::cout << "ISBN, Sold, Total Price, Unit Price: " ;
	std::cout << item1 << std::endl; // print their sum
	
	std::getchar();
	std::getchar();
	return 0;
}