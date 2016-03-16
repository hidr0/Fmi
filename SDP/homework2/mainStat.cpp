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

	// Ñúçäàéòå ìàñèâ îò ñòóäåíòè.
	// Ïðî÷åòåòå èíôîðìàöèÿ çà âñåêè îò òÿõ
	// Íàïèøåòå ôóíêöèÿ, êîÿòî íàìèðà ñðåäåí óñïåõ íà ñòóäåíòèò.
	// Ñîðòèðàéòå ìàñèâà îò ñòóäåíòè âúâ âúçõîäÿù ðåä ïî ñðåäåí óñïåõ.


	return 0;
}