/**
 * \file
 * listing_04_21_newstrct.cpp
 *
 * \brief
 * Using new with a structure.
 */
#include <iostream>
struct inflatable
// structure definition
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;

	inflatable * ps = new inflatable;          // allot memory for structure

	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);                     // method 1 for member access

	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;                       // method 2 for member access

	cout << "Enter price: $";
	cin >> ps->price;                          // method 1 for member access

	cout << "Name: " << (*ps).name << endl;    // method 2 for member access
	cout << "Volume: " << ps->volume;          // method 1 for member access
	cout << " cubic feet" << endl;
	cout << "Price: $" << ps->price << endl;   // method 1 for member access

	delete ps;                                 // free memory used by structure

	return 0;
}
