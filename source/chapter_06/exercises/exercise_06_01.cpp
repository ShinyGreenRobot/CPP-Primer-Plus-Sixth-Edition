/**
 * \file
 * exercise_06_01.cpp
 *
 * \brief
 * Program that echo keyboard input.
 *
 * \details
 * Converts uppercase input to lowercase and vice versa, digits are ignored.
 */
#include <cctype>
#include <iostream>

int main()
{
	using namespace std;

	char c;

	cin >> c;
	while(c != '@')
	{
		if(isalpha(c))
		{
			if(islower(c))
			{
				cout << (char) toupper(c);
			}
			else
			{
				cout << (char) tolower(c);
			}
		}
		cin >> c;
	}

	return 0;
}
