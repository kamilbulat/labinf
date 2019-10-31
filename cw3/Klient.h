#pragma once
#include<iostream>
#include<string>
#include"Piosenka.h"
using namespace std;
class Klient
{
	private:
		string imie, nazwisko;
		int indeks;
		int ID;
		int limit = 2;

	public:

		Piosenka* tablica;

		Klient() {}

		Klient(string _imie, string _nazwisko, int _ID, int _indeks, int _limit) {
			imie = _imie;
			nazwisko = _nazwisko;
			ID = _ID;
			indeks = _indeks;
			limit = _limit;

			tablica = new Piosenka[limit];
		}


		void dodajPiosenke(Piosenka arr[]);

		void setImie(string name);

		void setNazwisko(string surname);

		void setIndeks(int ind);

		void show();

		~Klient() {
			delete[] tablica;
		}
};

