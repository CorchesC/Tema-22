#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

struct data_ {
	int zi;
	string luna;
	int an;
};
struct excursie {
	string nume;
	string oras;
	string tara;
	data_ data_ex;
};
struct angajat {
	string nume;
	string functie;
	string departament;
	int salariu_baza;
	int total_sporuri;
	int ora_sp;
	int nr_ore_sp;
	int supl() {
		int supl = ora_sp * nr_ore_sp;
		return supl;
	}
	int salariuTotal() {
		int st = salariu_baza + total_sporuri + supl();
		return st;
	}
};
struct student {
	string nume;
	int grupa;
	int an_studiu;
	int nr_credite;
	bool bursa() {
		if (nr_credite >= 30) {
			return true;
		}
		else {
			return false;
		}
	}
};
struct examinare {
	string tip_examinare;
	string disciplina;
	int nr_credite;
};
struct stuudent2 {
	string nume;
	int grupa;
	int an_studiu;
	int nr_total_credite;
};
struct spectacol {
	string denumire;
	string autor;
	data_ data_sp;
	int nr_bilete;
	int pret;
	int bileteVandute() {
		int p = nr_bilete * pret;
		return p;
	}
};