/**
 * \file
 * listing_05_17_textin2.cpp
 *
 * \brief
 * Using cin.get(char).
 */
#include <iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);        // use the cin.get(ch) function
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);    // use the cin.get(ch) function again
	}
	cout << endl << count << " characters read\n";

	return 0;
}
