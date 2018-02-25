/**
 * \file
 * listing_04_10_strtype4.cpp
 *
 * \brief
 * Line input.
 */
#include <cstring>      // C-style string library
#include <iostream>
#include <string>       // make string class available

int main()
{
	using namespace std;

	const int CHARR_SIZE = 20;
	char charr[CHARR_SIZE];
	string str;
	string str2 = "panther";

	cout << "Length of string in charr before input: "
	     << strlen(charr) << endl;
	cout << "Length of string in str before input: "
	     << str.size() << endl;

	cout << "Enter a line of text:\n";
	// CHARR_SIZE argument specifies maximum length
	cin.getline(charr, CHARR_SIZE);
	cout << "You entered: " << charr << endl;

	cout << "Enter another line of text:\n";
	// cin now an argument; no length specifier
	getline(cin, str);
	cout << "You entered: " << str << endl;

	cout << "Length of string in charr after input: "
	<< strlen(charr) << endl;
	cout << "Length of string in str after input: "
	<< str.size() << endl;

	return 0;
}
