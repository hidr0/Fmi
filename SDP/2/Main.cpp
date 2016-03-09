#include <iostream>
#include "Student.h"

int main()
{
	Student st;
	Subject subj;
	subj.read();
	st.read();
	st.addSubject(subj);
	st.print();
	return 0;
}