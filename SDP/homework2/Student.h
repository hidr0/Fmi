// Добавете гардовете...

#include "Subject.h"

struct Student
{
	char name[30];
	unsigned fn;

	Subject allSubjects[50];
	unsigned countSubjects;

	void read();
	void print();

	// дали изпитът е положен успешно
	bool passedWithGrade(Subject&);
	// добавяне на оценка за дадена дисциплина
	bool addSubject(Subject&);
};