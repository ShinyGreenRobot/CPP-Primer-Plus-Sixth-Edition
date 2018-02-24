/**
 * \file
 * listing_04_07_strtype1.cpp
 *
 * \brief
 * Using the C++ string class.
 */
#include <iostream>
#include <string>                          // make string class available

int main()
{
	using namespace std;

	char charr1[20];                       // create an empty array
	char charr2[20] = "jaguar";            // create an initialized array
	string str1;                           // create an empty string object
	string str2 = "panther";               // create an initialized string

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	// cin in combination with string object
	cin >> str1;
	cout << "Here are some felines:\n";
	// cout in combination with string object
	cout << charr1 << " " << charr2 << " "<< str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	// array notation in combination  with string object
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;            // array notation with string object

	return 0;
}
