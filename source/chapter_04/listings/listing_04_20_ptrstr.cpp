/**
 * \file
 * listing_04_20_ptrstr.cpp
 *
 * \brief
 * Using pointers to strings.
 */
#include <cstring>                 // declares strlen() and strcpy()
#include <iostream>

int main()
{
	using namespace std;

	char animal[20] = "bear";      // animal holds bear
	const char * bird = "wren";    // bird holds address of string
	char * ps;                     // uninitialized

	cout << animal << " and ";     // display bear
	cout << bird << "\n";          // display wren
	// cout << ps << "\n";         // may display garbage, may cause a crash

	cout << "Enter a kind of animal: ";
	cin >> animal;                 // acceptable if input < 20 chars
	// cin >> ps;                  // not acceptable, ps is not initialized

	ps = animal;                   // set ps to point to string
	cout << ps << "!\n";           // same as using animal

	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	ps = new char[strlen(animal) + 1];   // get new storage
	strcpy(ps, animal);                  // copy string to new storage

	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	delete [] ps;

	return 0;
}
