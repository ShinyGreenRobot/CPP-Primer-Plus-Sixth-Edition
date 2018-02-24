/**
 * \file
 * listing_04_05_instr3.cpp
 *
 * \brief
 * Reading more than one word by concatenate of two get.
 */
#include <iostream>

int main()
{
	using namespace std;

	const int ARRAY_SIZE = 20;
	char name[ARRAY_SIZE];
	char dessert[ARRAY_SIZE];

	cout << "Enter your name:\n";
	cin.get(name, ARRAY_SIZE).get();    // read string, newline

	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ARRAY_SIZE).get();

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
