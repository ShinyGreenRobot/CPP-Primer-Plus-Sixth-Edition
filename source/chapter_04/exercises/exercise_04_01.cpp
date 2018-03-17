/**
 * \file
 * exercis_04_01.cpp
 *
 * \brief
 * Requests and displays user information.
 */
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string firstName;
	string lastName;
	char grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, firstName);
	cout << "What is your last name? ";
	getline(cin, lastName);
	cout << "What letter grade do you deserve? ";
	cin.get(grade);
	grade = grade + 1;    // adjust the grade downward, for example A becomes B
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}
