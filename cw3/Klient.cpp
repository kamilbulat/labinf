#include <iostream>
#include <string>
#include "Klient.h"


	void Klient::dodajPiosenke(Piosenka arr[]) {
		for (int i = 0; i < limit; i++) {
			//arr[i].sprawdz_ocene();
			tablica[i] = arr[i];
		}
	}

	void Klient::setImie(string name) {
		imie = name;
	}

	void Klient::setNazwisko(string surname) {
		nazwisko = surname;
	}

	void Klient::setIndeks(int ind) {
		indeks = ind;
	}

	void Klient::show() {
		cout << "DANE: " << endl;
		cout << "imie: " << imie << endl;
		cout << "nazwisko: " << nazwisko << endl;
		cout << "indeks: " << indeks << endl;
		cout << "ID: " << ID << endl;
		cout << "limit: " << limit << endl << endl;

		cout << "PIOSENKI: " << endl;
		for (int i = 0; i < limit; i++) {
			cout << "-------------------------------------------------" << endl;
			cout << "tytul: " << tablica[i].tytul << endl;
			cout << "autor: " << tablica[i].autor << endl;
			cout << "czas: " << tablica[i].czas << endl;
			cout << "gatunek: " << tablica[i].gatunek << endl;
			cout << "ocena: " << tablica[i].ocena << endl;
		}
	}

