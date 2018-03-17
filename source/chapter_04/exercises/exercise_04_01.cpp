/**
 * \file
 * exercise_04_01.cpp
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
	cout << "What is your age? ";
	cin >> age;

	// requested grade shall be adjusted downward, for example A becomes B
	grade = grade + 1;

	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}
