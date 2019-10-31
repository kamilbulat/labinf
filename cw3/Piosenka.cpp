#include "Piosenka.h"
using namespace std;

void Piosenka::sprawdz_ocene() {
	if (ocena >= 1 && ocena <= 5) {
		cout << "dobra ocena:" << ocena << endl;
	}

	else {
		ocena = 1;
		cout << "ocena spoza zakresu nowa ocena to: " << ocena << endl;;
	}}
