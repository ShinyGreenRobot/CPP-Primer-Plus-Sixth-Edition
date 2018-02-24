/**
 * \file
 * listing_04_04_instr2.cpp
 *
 * \brief
 * Reading more than one word with getline.
 */
#include <iostream>

int main()
{
	using namespace std;

	const int ARRAY_SIZE = 20;
	char name[ARRAY_SIZE];
	char dessert[ARRAY_SIZE];

	cout << "Enter your name:\n";
	cin.getline(name, ARRAY_SIZE);    // reads through newline

	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ARRAY_SIZE);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
