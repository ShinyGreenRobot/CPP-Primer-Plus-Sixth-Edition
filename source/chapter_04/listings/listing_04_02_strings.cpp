/**
 * \file
 * listing_04_02_strings.cpp
 *
 * \brief
 * Storing strings in an array.
 */
#include <iostream>
#include <cstring>    // for the strlen() function

int main()
{
	using namespace std;

	const int SIZE = 15;
	char name1[SIZE];                 // empty array
	char name2[SIZE] = "C++owboy";    // initialized array

	cout << "Howdy! I'm " << name2 << "! What's your name?\n";
	cin >> name1;

	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";

	name2[3] = '\0'; // set fourth element to the null character
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	return 0;
}
