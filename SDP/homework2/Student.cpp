#include "Student.h"

#include <iostream>

using namespace std;

void Student::read()
{
	cout << "Student name: ";
	cin.getline(name, sizeof(name));

	cout << "Number: ";
	cin >> fn;

	countSubjects = 0;
}

void Student::print()
{
	cout << "Student name: " << name << endl;
	cout << "Number: " << fn << endl;

	cout << "Grades: " << endl;
	for(Subject* currSubject = allSubjects; currSubject < allSubjects + countSubjects; ++currSubject)
	{
		currSubject->print();
	}
}

// дали изпитът е положен успешно
bool Student::passedWithGrade(Subject& subj)
{
	for(Subject* currSubject = allSubjects; currSubject < allSubjects + countSubjects; ++currSubject)
	{
		if(currSubject->equals(subj))
		{
			subj.grade = currSubject->grade;
			return true;
		}
	}

	return false;
}

// добавяне на оценка за дадена дисциплина
bool Student::addSubject(Subject& subj)
{
	// променете функцията така, че
	// ако вече съществува запис за уч. дисциплина, 
	// оценката да се промени
	if (!passedWithGrade(subj)){
		
		if(countSubjects < sizeof(allSubjects))
		{
			allSubjects[countSubjects] = subj;
			++countSubjects;

			return true;
		}
	}

	return false;
}