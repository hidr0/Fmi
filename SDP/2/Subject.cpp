#include "Subject.h"
#include <iostream>

void Subject::read(){
	std::cout << "Reading subject" << std::endl;
	std::cout << "Subject name: ";
	std::cin.getline(name,sizeof(name));

	do{
		std::cout << "Grade: ";
		std::cin >> grade;
	}while(grade < 2 || grade > 6);

	std::cout << std::endl;
	std::cin.ignore();
}
void Subject::print(){
	std::cout << "Subject name: " << name << std::endl;
	std::cout << "Grade:  " << grade << std::endl;
	std::cout << std::endl;
	std::cin.ignore();
}

bool Subject::equal(const Subject& s){
	return strcmp(name, s.name) == 0;
}

void Subject::changeGrade(const Subject& s){
	if(strcmp(name, s.name) == 0){
		grade = s.grade;
	}
}