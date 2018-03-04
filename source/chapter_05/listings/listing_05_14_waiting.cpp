/**
 * \file
 * listing_05_14_waiting.cpp
 *
 * \brief
 * Using clock() in a time-delay loop.
 */
#include <ctime>    // describes clock() function, clock_t type
#include <iostream>

int main()
{
	using namespace std;

	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;    // convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay )          // wait until time passes
	{
		;                                     // note the semicolon
	}
	cout << "done \a\n";

	return 0;
}
