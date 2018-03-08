/**
 * \file
 * listing_05_01_forloop.cpp
 *
 * \brief
 * Introducing the for loop.
 */
#include <iostream>

int main()
{
	using namespace std;

	int i; // create a counter

	// initialize; test ; update
	for (i = 0; i < 5; i++)
	{
		cout << "C++ knows loops.\n";
	}

	cout << "C++ knows when to stop.\n";

	return 0;
}
