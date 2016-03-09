#include <iostream>
#include "Student.h"

void Student::read(){
	std::cout << "Student name: ";
	std::cin.getline(name,sizeof(name));


	std::cout << "Faculty number: ";
	std::cin >> factultynumber;

	subjectsCount = 0;
}

void Student::print(){
	std::cout << "Student name: " << name << std::endl;
	std::cout << "Faculty number:  " << factultynumber << std::endl;

	std::cout << "Grades: " << std::endl;

	for (Subject* currSubject = allSubjects; currSubject < allSubjects + subjectsCount; currSubject++)
	{
		currSubject->print();
	}
}

bool Student::passedWithGrade(Subject& s){
	for (Subject* currSubject = allSubjects; currSubject < allSubjects + subjectsCount; currSubject++)
	{
		if (currSubject->equal(s))
		{
			s.grade = currSubject->grade;
			return true;
		}
	}
	return false;
}

bool Student::addSubject(Subject& s){
	if (!passedWithGrade(s)){
		if (subjectsCount < sizeof(allSubjects)){
			allSubjects[subjectsCount] = s;
			++subjectsCount;
			return true;
		}
		return false;
	}
	return false;
}