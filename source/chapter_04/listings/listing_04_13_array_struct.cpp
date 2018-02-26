/**
 * \file
 * listing_04_13_array_struct.cpp
 *
 * \brief
 * An array of structures.
 */
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;

	// initializing an array of structs
	inflatable guests[2] =
	{
		{"Bambi", 0.5, 21.99},        // first structure in array
		{"Godzilla", 2000, 565.99}    // second structure in array
	};

	cout << "The guests " << guests[0].name << " and " << guests[1].name
		 << " have a combined volume of "
		 << guests[0].volume + guests[1].volume << " cubic feet.\n";

	return 0;
}
