/**
 * \file
 * listing_03_14_typecast.cpp
 *
 * \brief
 * Forcing type changes.
 */
#include <iostream>

int main()
{
	using namespace std;

	int auks, bats, coots;

	// add values as double then convert the result to int
	auks = 19.99 + 11.99;

	// add values as int
	bats = (int) 19.99 + (int) 11.99;    // old C syntax
	coots = int (19.99) + int (11.99);   // new C++ syntax

	cout << "auks = "  << auks  << ", ";
	cout <<	"bats = "  << bats  << ", ";
	cout << "coots = " << coots << endl;

	char ch = 'Z';

	// first print as char and then as int
	cout << "The code for " << ch << " is " << int(ch) << endl;

	// use static_cast to print as int
	cout << "Yes, the code is " << static_cast<int>(ch) << endl;

	return 0;
}
