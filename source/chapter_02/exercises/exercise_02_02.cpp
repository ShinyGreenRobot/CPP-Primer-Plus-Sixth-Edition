/**
 * \file
 * exercise_02_02.cpp
 *
 * \brief
 * Converts a distance in furlongs to yards.
 */

#include <iostream>

int main()
{
	using namespace std;
	int furlongs, yards;

    cout << "Enter distance in furlongs: ";
    cin >> furlongs;
    yards = 220 * furlongs;
	cout << furlongs << " furlongs = " << yards << " yards";

	return 0;
}
