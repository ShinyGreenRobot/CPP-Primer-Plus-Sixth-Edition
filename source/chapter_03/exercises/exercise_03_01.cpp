/**
 * \file
 * exercis_03_01.cpp
 *
 * \brief
 * Converts inches to feet and inches.
 */
#include <iostream>

int main()
{
	using namespace std;

	const int kInchesPerFeet = 12;
	int lengthInInches;
	int feet;
	int inches;

	cout << "Enter your length in inches: __\b\b";
	cin >> lengthInInches;

	feet = lengthInInches / kInchesPerFeet;
	inches = lengthInInches % kInchesPerFeet;

	cout << lengthInInches << " inches equals "
		 << feet << " feet and "
		 << inches << " inches.\n";

	return 0;
}
