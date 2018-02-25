/**
 * \file
 * listing_04_11_structur.cpp
 *
 * \brief
 * A simple structure.
 */
#include <iostream>

struct inflatable // structure declaration
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;

	// guest is a structure variable of type inflatable
	// It's initialized to the indicated values
	inflatable guest =
	{
		"Glorious Gloria",    // name value
		1.88,                 // volume value
		29.99                 // price value
	};

	// pal is a second variable of type inflatable
	inflatable pal =
	{
			"Audacious Arthur",
			3.12,
			32.99
	};

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";

	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";

	return 0;
}

