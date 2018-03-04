/**
 * \file
 * listing_05_07_plus_one.cpp
 *
 * \brief
 * The increment operator.
 */
#include <iostream>

int main()
{
	using std::cout;

	int a = 20;
	int b = 20;

	cout << "a   = " << a   << ":   b = " << b   << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << "a   = " << a   << ":   b = " << b   << "\n";

	return 0;
}
