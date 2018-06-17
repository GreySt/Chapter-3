/*
 * chapter3_2.cpp
 *
 *  Created on: 17.06.2018
 *      Author: trtec
 */

#include <iostream>



bool isEven(int number)
{
	if (number % 2 == 0)
		return 1;
	else
		return 0;
}


int main()
{
	std::cout << "Enter an integer: ";
	    int x;
	    std::cin >> x;

	    if (isEven(x))
	        std::cout << x << " is even\n";
	    else
	        std::cout << x << " is odd\n";

	   return 0;


}


