#include <iostream>
#include "Student.h"

int main()
{
	Student st;
	Subject subj,subj1;
	subj.read();
	st.read();
	std::cout <<" st.passedWithGrade(subj) = " <<  st.passedWithGrade(subj) <<std::endl;
	st.addSubject(subj);
	std::cout <<" st.passedWithGrade(subj) = " <<  st.passedWithGrade(subj) <<std::endl;
	subj.grade = 3;
	st.addSubject(subj);
	std::cout <<" st.passedWithGrade(subj) = " <<  st.passedWithGrade(subj) <<std::endl;
	st.print();

	return 0;
}