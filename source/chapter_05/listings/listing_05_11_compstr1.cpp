/**
 * \file
 * listing_05_11_compstr1.cpp
 *
 * \brief
 * Comparing strings using arrays.
 */
#include <cstring>    // includes prototype for strcmp()
#include <iostream>

int main()
{
	using namespace std;
	char word[5] = "?ate";

	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}

	cout << "After loop ends, word is " << word << endl;

	return 0;
}
