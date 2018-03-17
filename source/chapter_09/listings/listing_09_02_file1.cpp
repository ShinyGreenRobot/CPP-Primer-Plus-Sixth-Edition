/**
 * \file
 * listing_09_02_file1.cpp
 *
 * \brief
 * Main entry point of three-file program example.
 *
 * \details
 * Intended to be compiled together with
 *  - listing_09_01_coordin.h
 *  - listing_09_03_file2.cpp
 */

#include "listing_09_01_coordin.h" // structure templates, function prototypes

#include <iostream>

using namespace std;

int main()

{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)    // slick use of cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye!\n";

	return 0;
}
