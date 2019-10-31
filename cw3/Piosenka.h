#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Piosenka
{
		string tytul;
		string autor;
		string gatunek;
		string czas;
		int ocena;

		Piosenka() {};

		Piosenka(string _tytul, string _autor, string _gatunek, string _czas, int _ocena){
			tytul = _tytul;
			autor = _autor;
			gatunek = _gatunek;
			czas = _czas;
			ocena = _ocena;
		}
		
		void sprawdz_ocene();
};
