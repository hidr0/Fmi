// �������� ���������...

#include "Subject.h"

struct Student
{
	char name[30];
	unsigned fn;

	Subject allSubjects[50];
	unsigned countSubjects;

	void read();
	void print();

	// ���� ������� � ������� �������
	bool passedWithGrade(Subject&);
	// �������� �� ������ �� ������ ����������
	bool addSubject(Subject&);
};