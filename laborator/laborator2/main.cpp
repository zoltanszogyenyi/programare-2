#include <iostream>
#include "Stiva.h"

using namespace std;

int main()
{
	Stiva **sir;
	sir = new Stiva*[5];
	sir[0] = new Stiva(7);
	sir[1] = new Stiva(10);
	Stiva s(4);
	cout << "index: " << s.index << endl;

	s.push(1);
	s.push(3);
	s.push(-3);

	sir[0]->push(1);
	sir[0]->push(2);
	sir[0]->push(3);
	sir[0]->afisare();

	sir[1]->push(-1);
	sir[1]->push(-2);
	sir[1]->push(-3);
	sir[1]->afisare();
	s.afisare();

	Stiva s2(s);

	s2.push(4);
	s2.afisare();

	if (s.isGoala())
	{
		cout << "Stiva este goala!" << endl;
	} else
	{
		cout << "Stiva nu este goala!" << endl;
	}

	cout << "index: " << s.index << endl;

	return 0;
}