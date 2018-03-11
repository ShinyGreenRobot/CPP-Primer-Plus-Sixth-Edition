/**
 * \file
 * listing_07_02_protos.cpp
 *
 * \brief
 * Using prototypes and function calls.
 */
#include <iostream>

void cheers(int);         // prototype: no return value
double cube(double x);    // prototype: returns a double

int main()
{
	using namespace std;

	cheers(5);    // function call

	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);    // function call
	cout << "A " << side <<"-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";

	cheers(cube(2));    // prototype protection at work
	return 0;

}

/**
 * \brief
 * Prints the text Cheers! n times.
 *
 * \param[in] n
 * Controls the number of times the text is displayed.
 */
void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}

/**
 * \brief
 * Gives the cube of a number \p x, or in other words calculates \p x multiplied
 * by itself two times.
 *
 * \param[in] x
 * The number to be cubed.
 *
 * \return
 * The cube of the parameter x.
 */
double cube(double x)
{
	return x * x * x;
}
