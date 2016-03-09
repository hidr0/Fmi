#include "Subject.h"

struct Student
{
	char name[30];
	unsigned factultynumber;

	Subject allSubjects[50];
	unsigned subjectsCount;

	void read();
	void print();

	bool passedWithGrade(Subject&);

	bool addSubject(Subject&);
};