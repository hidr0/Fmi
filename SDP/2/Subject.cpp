#include "Subject.h"
#include <iostream>

void Subject::read(){
	std::cout << "Subject name: ";
	std::cin.getline(name,sizeof(name));


	std::cout << "Grade: ";
	std::cin >> grade;
	std::cin.ignore();
}
void Subject::print(){
	std::cout << "Subject name: " << name << std::endl;
	std::cout << "Grade:  " << grade << std::endl;
}

bool Subject::equal(const Subject& s){
	return strcmp(name, s.name) == 0;
}