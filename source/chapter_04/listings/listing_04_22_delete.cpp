/**
 * \file
 * listing_04_22_delete.cpp
 *
 * \brief
 * Using the delete operator.
 */
#include <cstring>    // or string.h
#include <iostream>

using namespace std;

char * getname(void);   // function prototype

int main()
{
	char * name;    // create pointer but no storage

	name = getname();    // assign address of string to name
	cout << name << " at " << (int *) name << "\n";
	delete [] name;    // memory freed

	name = getname();    // reuse freed memory
	cout << name << " at " << (int *) name << "\n";
	delete [] name;    // memory freed again

	return 0;
}

/**
 * \brief
 * Reads in a name provided by the user.
 *
 * \details
 * Will allocate memory for the pointer that is returned. Caller is responsible
 * for freeing up this memory when not needed anymore.
 *
 * \return
 * Pointer to a string holding the name.
 */
char * getname()
{
	char temp[80];    // temporary storage, lost when function ends

	cout << "Enter last name: ";
	cin >> temp;

	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);    // copy string into space just large enough

	return pn;
}
