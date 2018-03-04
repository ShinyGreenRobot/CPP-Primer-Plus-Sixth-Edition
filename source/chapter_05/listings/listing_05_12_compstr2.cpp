/**
 * \file
 * listing_05_12_compstr2.cpp
 *
 * \brief
 * Comparing strings using the class String.
 */
#include <iostream>
#include <string>	// string class

int main()
{
	using namespace std;

	string word = "?ate";

	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}

	cout << "After loop ends, word is " << word << endl;

	return 0;
}
