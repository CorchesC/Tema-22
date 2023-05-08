#pragma once
#include"structuri.h"
using namespace std;

void afisareExcursii(excursie exc[], int d) {
	for (int i = 0; i < d; i++) {
		if (exc[i].data_ex.an > 0) {
			cout << exc[i].nume << " are excursie in" << exc[i].oras << " " << exc[i].tara << "in data de: " << exc[i].data_ex.zi << " " << exc[i].data_ex.luna << " " << exc[i].data_ex.an << endl;
 		}
		else {
			cout << exc[i].nume << " nu are nici o excursie programata." << endl;
		}
	}
}
int salariuMaxum(angajat ang[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (ang[i].salariuTotal() > max) {
			max = ang[i].salariuTotal();
		}
	}
	return max;
}
int numarTotalOreSuplimentareMarketing(angajat ang[], int d) {
	int ot = 0;
	for (int i = 0; i < d; i++) {
		if (ang[i].departament == "marketing") {
			ot += ang[i].nr_ore_sp;
		}
	}
	return ot;
}
void afisareStudentiCuBursa(student stdn[], int d) {
	for (int i = 0; i < d; i++) {
		if (stdn[i].bursa() == true) {
			cout << stdn[i].nume << " in anul: " << stdn[i].an_studiu << " si grupa: " << stdn[i].grupa << endl;
		}
	}
}
int sumaIncasataMai(spectacol spct[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (spct[i].data_sp.luna == "mai" && spct[i].data_sp.an == 2019) {
			s += spct[i].bileteVandute();
		}
	}
	return s;
}
void afisareIL(spectacol spct[], int d) {
	for (int i = 0; i < d; i++) {
		if (spct[i].autor == "IL Caragiale") {
			cout << spct[i].denumire << "  " << spct[i].data_sp.zi << "/" << spct[i].data_sp.luna << "/" << spct[i].data_sp.an << endl;
		}
	}
}