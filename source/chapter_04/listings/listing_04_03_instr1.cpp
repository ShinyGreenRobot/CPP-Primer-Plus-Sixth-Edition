/**
 * \file
 * listing_04_03_instr1.cpp
 *
 * \brief
 * Reading more than one string.
 */
#include <iostream>

int main()
{
	using namespace std;

	const int ARRAY_SIZE = 20;
	char name[ARRAY_SIZE];
	char dessert[ARRAY_SIZE];

	cout << "Enter your name:\n";
	cin >> name;

	cout << "Enter your favorite dessert:\n";
	cin >> dessert;

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
