/**
 * \file
 * listing_02_05_ourfunc.cpp
 *
 * \brief
 * Defining your own function.
 */

#include <iostream>

void simon(int);

int main()
{
	using namespace std;

	simon(3);	// call the simon() function

    cout << "Pick an integer: ";
	int count;
    cin >> count;
	simon(count);	// call the simon() function again
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)	// define the simon() function
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
	// void functions does not need return statements
}
