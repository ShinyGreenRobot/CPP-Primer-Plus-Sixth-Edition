/**
 * \file
 * listing_04_17_use_new.cpp
 *
 * \brief
 * Using the new operator.
 */
#include <iostream>

int main()
{
	using namespace std;

	int nights = 1001;
	int* pt = new int;    // allocate space for an int
	*pt = 1001;           // store a value there

	cout << "nights value = " << nights << ": location " << &nights << endl;
	cout << "int pointer value = " << *pt << ": location = " << pt << endl;

	double * pd = new double;    // allocate space for a double
	*pd = 10000001.0;            // store a value there

	cout << "double pointer value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	return 0;
}
