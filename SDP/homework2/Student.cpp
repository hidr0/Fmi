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

// ���� ������� � ������� �������
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

// �������� �� ������ �� ������ ����������
bool Student::addSubject(Subject& subj)
{
	// ��������� ��������� ����, ��
	// ��� ���� ���������� ����� �� ��. ����������, 
	// �������� �� �� �������
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