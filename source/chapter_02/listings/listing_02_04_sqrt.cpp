/**
 * \file
 * listing_02_04_sqrt.cpp
 *
 * \brief
 * Using the sqrt() function.
 */

#include <iostream>
#include <cmath>	// or math.h

int main()
{
	using namespace std;

	double area;

    cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That´s the equivalent of a square " << side
		 << " feet to side." << endl;
	cout << "How fascinating!";
	return 0;
}
