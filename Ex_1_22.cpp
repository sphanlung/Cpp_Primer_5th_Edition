///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_22.cpp                          			                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions. Reads multiple book transactions  //
// for the same ISBN. Prints the ISBN, total book sales, total price and average     //
// price. Headers Sales_item.h and Version_test.h must be placed in project folder.	 //											 //
// Transaction sample (ISBN, units sold, price): 0-201-78345-X 3 20.00				 //
//																					 //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>
#include "Sales_item.h"				// Header provided by book author

int main()
{
	Sales_item item1, item2, item3, item4;

	std::cout << "Enter ISBN, books sold and price:";
	std::cin >> item1;
	std::cout << std::endl << "Enter ISBN, books sold and price:";
	std::cin >> item2; // read a pair of transactions
	std::cout << std::endl << "Enter ISBN, books sold and price:";
	std::cin >> item3; // read a pair of transactions
	std::cout << std::endl << "Enter ISBN, books sold and price:";
	std::cin >> item4; // read a pair of transactions
	std::cout << std::endl << "ISBN, Sold, Total Price, Average Unit Price: ";
	std::cout << std::endl << item1 + item2 + item3 + item4; // print sum

	std::getchar();
	std::getchar();
	return 0;
}