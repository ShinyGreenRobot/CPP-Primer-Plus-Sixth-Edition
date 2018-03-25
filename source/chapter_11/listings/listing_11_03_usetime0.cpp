/**
 * \file
 * listing_11_03_usetime0.cpp
 *
 * \brief
 * Using the first draft of the Time class.
 *
 * \details
 * Intended to be complied together with listing_11_02_mytime0.cpp.
 */
#include "listing_11_01_mytime0.h"

#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "coding.Sum(fixing) = ";
	total.Show();
	cout << endl;

	return 0;
}
