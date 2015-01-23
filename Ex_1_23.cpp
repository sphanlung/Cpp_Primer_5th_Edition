///////////////////////////////////////////////////////////////////////////////////////
// Name:   Ex_1_23.cpp                          			                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Description: C++ Primer 5th exercise solutions. Reads multiple book transactions  //
// for same ISBN. Prints number of transactions per ISBN. Headers Sales_item.h and   //
// Version_test.h must be placed in project folder.	This exercise is based on the    //
// example in 1.4.4 or exercise 1.18 (see ex_1_18.cpp).								 //
// Transaction sample (ISBN, units sold, price): 0-201-78345-X 3 20.00				 //
//																					 //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>
#include "Sales_item.h"				// Header provided by book author

/*int main()
{
	Sales_item item1, item2, item3, item4;	// Declare Sales_Item transactions

	std::cout << "Enter ISBN, books sold and price: ";


*/
int main()
{
	// currVal is the ISBN we're counting; we'll read new values into val
	Sales_item currVal, val;
	// read first number and ensure that we have data to process
	std::cout << "Enter ISBN, books sold and price: " << std::endl;
	if (std::cin >> currVal)
	{
		int cnt = 1;				// declare count for the current value
		while (std::cin >> val)
		{
			if (val.isbn() == currVal.isbn())		// if the isbn members are the same
				++cnt;				// add 1 to cnt
			else
			{						// otherwise, print count for previous value
				std::cout << currVal.isbn() << " occurs " << cnt << " times" 
					<< std::endl;
				currVal.isbn() = val.isbn();		// remember the new isbn value
				cnt = 1;			// reset counter
			}

		}
		// print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}							// outermost if statement ends here

	std::getchar();					//Prevents Windows Debugger from closing
	std::getchar();
		return 0;
}