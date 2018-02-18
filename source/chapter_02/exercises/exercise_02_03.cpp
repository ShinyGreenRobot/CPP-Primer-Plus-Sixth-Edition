/**
 * \file
 * exercise_02_03.cpp
 *
 * \brief
 * Displays output by the use of functions.
 */

#include <iostream>

void displayThreeBlindMice();
void displaySeeHowTheyRun();

int main()
{

	displayThreeBlindMice();
	displayThreeBlindMice();
	displaySeeHowTheyRun();
	displaySeeHowTheyRun();
	return 0;
}

/**
 * \brief
 * Displays the text Three blind mice, followed by a line break.
 */
void displayThreeBlindMice()
{
	using namespace std;
	cout << "Three blind mice";
	cout << endl;
}

/**
 * \brief
 * Displays the text See how they run, followed by a line break.
 */
void displaySeeHowTheyRun()
{
	using namespace std;
	cout << "See how they run";
	cout << endl;
}

