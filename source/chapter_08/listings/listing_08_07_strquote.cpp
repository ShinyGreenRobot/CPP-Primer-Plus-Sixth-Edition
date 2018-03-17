/**
 * \file
 * listing_08_07_strquote.cpp
 *
 * \brief
 * Different designs.
 */
#include <iostream>
#include <string>

using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);    // has side effect
const string & version3(string & s1, const string & s2);    // bad design

int main()
{
	string input;
	string copy;
	string result;

	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = version1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	cout << "Resetting original string.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	return 0;
}

/**
* \brief
* Builds a string based on strings input parameters.
*/
string version1(const string & s1, const string & s2)
{
	string temp;

	temp = s2 + s1 + s2;

	return temp;
}

/**
 * \brief
 * Builds a string based on strings input parameters.
 *
 * \note
 * Has side affect that it alters input parameter \p s1.
 */
const string & version2(string & s1, const string & s2)
{
	s1 = s2 + s1 + s2;

	// safe to return reference passed to function
	return s1;
}

/**
 * \brief
 * Builds a string based on strings input parameters.
 *
 * \note
 * Bad design on purpose, to show how not to do.
 */
const string & version3(string & s1, const string & s2)
{
	string temp;

	temp = s2 + s1 + s2;

	// not safe to return reference to local variable
	return temp;
}
