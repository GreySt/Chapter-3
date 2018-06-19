/*
 * chapter3_7.cpp
 *
 *  Created on: 19.06.2018
 *      Author: rost
 */
#include <cmath>
#include <iostream>


int isLargerThanPowerOfTwo(int x, int pow)
{
	if (x >= pow)
		std::cout << "1";
	else
		std::cout << "0";

	if (x >= pow)
		return x - pow;
	else
		return x;
}




int main()
{
	std::cout << "Please enter an Integer value between 0 and 255" << "\n";
	int x;
	std::cin >> x;

	x= isLargerThanPowerOfTwo(x, 128);
	x= isLargerThanPowerOfTwo(x, 64);
	x= isLargerThanPowerOfTwo(x, 32);
	x= isLargerThanPowerOfTwo(x, 16);

	std::cout << " ";

	x= isLargerThanPowerOfTwo(x, 8);
	x= isLargerThanPowerOfTwo(x, 4);
	x= isLargerThanPowerOfTwo(x, 2);
	x= isLargerThanPowerOfTwo(x, 1);

	return 0;

}
