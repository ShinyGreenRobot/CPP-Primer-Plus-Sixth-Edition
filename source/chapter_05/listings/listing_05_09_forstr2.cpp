/**
 * \file
 * listing_05_09_forstr2.cpp
 *
 * \brief
 * Reversing an array.
 */
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "Enter a word: ";
	string word;
	cin >> word;

	// physically modify string object
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{                         // start of block
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}                         // end of block
	cout << word << "\nDone\n";

	return 0;
}
