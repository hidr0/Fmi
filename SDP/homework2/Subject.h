#ifndef SUBJECT_H
#define SUBJECT_H

struct Subject
{
	char name[20];
	double grade;

	void read();
	void print();

	bool equals(const Subject&);
};

#endif // SUBJECT_H