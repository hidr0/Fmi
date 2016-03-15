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

	// Създайте масив от студенти.
	// Прочетете информация за всеки от тях 
	// Напишете функция, която намира среден успех на студентит.
	// Сортирайте масива от студенти във възходящ ред по среден успех.
	

	return 0;
}