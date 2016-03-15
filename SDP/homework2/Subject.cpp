#include "Subject.h"

#include <iostream>

using namespace std;

void Subject::read()
{
	cout << "Subject name: ";
	cin.getline(name, sizeof(name));

	cout << "Grade: ";
	cin >> grade;

	cin.ignore();
}

void Subject::print()
{
	cout << "Subject name: " << name << endl;
	cout << "Grade: " << grade << endl;
}

bool Subject::equals(const Subject& otherSubj)
{
	return !strcmp(name, otherSubj.name);
}