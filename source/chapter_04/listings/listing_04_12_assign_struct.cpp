/**
 * \file
 * listing_04_12_assign_struct.cpp
 *
 * \brief
 * Assigning structures.
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

	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;

	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;    // assign one structure to another

	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;

	return 0;
}

