/**
 * \file
 * listing_05_18_textin3.cpp
 *
 * \brief
 * Reading chars to end of file.
 */
#include <iostream>

int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);        // attempt to read a char
	while (cin.fail() == false)   // test for EOF
	{
		cout << ch;     // echo character
		++count;
		cin.get(ch);    // attempt to read another char
	}
	cout << endl << count << " characters read\n";

	return 0;
}
