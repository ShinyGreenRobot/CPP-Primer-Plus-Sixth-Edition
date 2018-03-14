/**
 * \file
 * listing_08_04_swaps.cpp
 *
 * \brief
 * Swapping with references and with pointers.
 */
#include <iostream>

void swapr(int & a, int & b);    // a, b are aliases for int variables
void swapp(int * p, int * q);    // p, q are addresses of int variables
void swapv(int a, int b);        // a, b are new int variables

int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);    // pass variables

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);    // pass addresses of variables

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);    // pass values of variables

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	return 0;
}

void swapr(int & a, int & b)    // use references
{
	int temp;

	// use a, b for values of variables
	temp = a;
	a = b;
	b = temp;
}
void swapp(int * p, int * q)    // use pointers
{
	int temp;

	// use *p, *q for values of variables
	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)    // try using values
{
	int temp;

	// use a, b for values of variables
	temp = a;
	a = b;
	b = temp;
}

