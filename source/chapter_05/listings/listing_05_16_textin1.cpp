/**
 * \file
 * listing_05_16_textin1.cpp
 *
 * \brief
 * Reading chars with a while loop.
 */
#include <iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;           // get a first character
	while (ch != '#')    // test the character
	{
		cout << ch;      // echo the character
		++count;         // count the character
		cin >> ch;       // get the next character
	}
	cout << endl << count << " characters read\n";

	return 0;
}