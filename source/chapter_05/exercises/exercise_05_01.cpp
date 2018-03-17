/**
 * \file
 * exercise_05_01.cpp
 *
 * \brief
 * Calculates the sum of an integer series.
 */
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	int startNumber, endNumber, currentNumber, sum;

	cout << "Enter start number: ";
	cin >> startNumber;
	cout << "Enter end number: ";
	cin >> endNumber;

	sum = 0;
	currentNumber = startNumber;
	while (currentNumber <= endNumber)
	{
		sum += currentNumber;
		currentNumber++;
	}

	cout << "The sum of all the integers from " << startNumber
		 << " through " << endNumber << " is " << sum << ".";

	return 0;
}
