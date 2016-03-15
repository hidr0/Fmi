#include <iostream>
#include "Student.h"

void Student::read(){
	std::cout << "Reading student." << std::endl;
	std::cout << "Student name: ";
	std::cin.getline(name,sizeof(name));


	std::cout << "Faculty number: ";
	std::cin >> factultynumber;

	std::cout << std::endl;
	std::cin.ignore();
	subjectsCount = 0;
}

void Student::print(){
	std::cout << "Printing student." << std::endl;
	std::cout << "Student name: " << name << std::endl;
	std::cout << "Faculty number:  " << factultynumber << std::endl;

	std::cout << "Grades: " << std::endl;

	for (Subject* currSubject = allSubjects; currSubject < allSubjects + subjectsCount; currSubject++)
	{
		currSubject->print();
	}

	std::cout << std::endl;
	std::cin.ignore();
}

int Student::passedWithGrade(Subject& s){
	for (Subject* currSubject = allSubjects; currSubject < allSubjects + subjectsCount; currSubject++)
	{
		if (currSubject->equal(s))
		{
			return currSubject->grade;
		}
	}
	return -1;
}

bool Student::addSubject(Subject& s){
	if (passedWithGrade(s) == -1){
		if (subjectsCount < sizeof(allSubjects)){
			allSubjects[subjectsCount] = s;
			++subjectsCount;
			return true;
		}
	}else{
		for (int i = 0; i < subjectsCount; i++){
			if (allSubjects[i].equal(s)){
				if(s.grade < 2 || s.grade > 6){
					allSubjects[i].grade = s.grade;
				}else{
					allSubjects[i].grade = 1;
				}
				return true;
			}
		}
	}
	return false;
}