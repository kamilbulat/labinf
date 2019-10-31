#include<iostream>
#include<string>
#include"Piosenka.h"
#include"Klient.h"
#include"Klienci.h"
using namespace std;

int main() {

	Piosenka p1("sialala", "edward", "pop", "1,25", 6);
	Piosenka p2("lalala", "jozek", "metal", "2,22", 2);


	Piosenka piosenki[2];
	piosenki[0] = p1;
	piosenki[1] = p2;

	Klient k1("kamil", "bulat", 222, 555, 2);
	k1.dodajPiosenke(piosenki);

	Piosenka p3("aaaaa", "cccc", "abcd", "3,23", 4);

	k1.show();

	//p1.sprawdz_ocene();

	cout << "abbc" << endl;
	cout << "aaa";

	return 0;
}