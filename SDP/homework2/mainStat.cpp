#include <iostream>
#include "Student.h"
#include "Subject.h"

using namespace std;

int main()
{
	Subject sdp;
	sdp.read();
	sdp.print();

	Student me;
	me.read();
	me.addSubject(sdp);

	me.print();

	// �������� ����� �� ��������.
	// ��������� ���������� �� ����� �� ��� 
	// �������� �������, ����� ������ ������ ����� �� ���������.
	// ���������� ������ �� �������� ��� �������� ��� �� ������ �����.
	

	return 0;
}