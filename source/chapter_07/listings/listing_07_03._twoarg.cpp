/**
 * \file
 * listing_07_03_twoarg.cpp
 *
 * \brief
 * A function with two arguments.
 */
#include <iostream>

using namespace std;

void n_chars(char, int);

int main()
{
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	while (ch != 'q')   // q to quit
	{
		cout << "Enter an integer: ";
		cin >> times;
		n_chars(ch, times);    // function that takes two arguments
		cout << "\nEnter another character or press the q-key to quit: ";
		cin >> ch;
	}
	cout << "The value of times is " << times << ".\n";
	cout << "Bye\n";

	return 0;
}

/**
 * \brief
 * Displays the character c n times.
 *
 * \param[in] c
 * Character to be displayed a number of times.
 *
 * \param[in] n
 * Number of times to display the character.
 */
void n_chars(char c, int n)
{
	while (n-- > 0)    // continue until n reaches 0
	{
		cout << c;
	}
}
