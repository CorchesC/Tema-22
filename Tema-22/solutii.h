#pragma once
#include "functii.h"
#include "structuri.h"
using namespace std;

void sol1() {
	//Structura data memorează o dată calendaristică.Structura excursie memorează numele persoanei înscrise pentru excursie, țara și orașul de destinație al excursiei și data de plecare.
	//Scrie o secventa de instructiuni C++ care conţine declarații de variabile si instructiuni pentru determinarea şi afişarea destinaţiei(tará, oras) și a datei pentru fiecare dintre excursiile la
	//care s - a înscris persoana cu numele memorat prin variabila numed sau se va afisa mesajul Nicio excursie, dacă persoana nu s - a inscris la nicio excursie.

	excursie a;
	a.nume = "Andrei";
	a.oras = "Roma";
	a.tara = "Italia";
	a.data_ex.zi = 1;
	a.data_ex.luna = "asugust";
	a.data_ex.an = 2023;

	excursie b; 
	b.nume = "Calin";
	b.oras = "Lisabona";
	b.tara = "Portugalia";
	b.data_ex.zi = 1;
	b.data_ex.luna = "asugust";
	b.data_ex.an = 2023;

	excursie c;
	b.nume = "Calin";
	b.oras = "Lisabona";
	b.tara = "Portugalia";

	excursie exc[3] = { a,b,c };

	afisareExcursii(exc,3);
}
void sol2() {
	//Structura angajat memorează numele, funcția îndeplinită, departamentul in care lucrează, salariul de încadrare(salariu_baza) al unui angajat.Alte câmpuri reprezintá : salariu_obt salariul lunar obținut de angajat, ora_sp număr de ore suplimentare efectuate de către angajat.
	//Câmpul salariu_obt este necompletat inițial și se va completa cu suma dintre salariu_baza, total_sporuri şi suma plătită pentru ore suplimentare.Vectorul a memorează datele pentru 300 de angajaţi nr_ore_sp suma plătită pentru o orá suplimentara, ai unei firme.
	//Scrie o secvență de instrucțiuni C++ care conține declarații de variabile și instrucțiuni pentru :
	//a) completarea câmpului salariu_obt pentru toţi angajații;
	//b) afișarea salariului de valoare maximă obținut de către angajații din departamentul producţie;
	//c) afișarea numărului total de ore suplimentare efectuat de către angajații din departamentul marketing.

	angajat a;
	a.nume = "Calin";
	a.functie = "Social Media Manager";
	a.departament = "marketing";
	a.salariu_baza = 5000;
	a.total_sporuri = 500;
	a.ora_sp = 600;
	a.nr_ore_sp = 3;

	angajat b;
	b.nume = "Ion";
	b.functie = "Specialist Reclame";
	b.departament = "marketing";
	b.salariu_baza = 7000;
	b.total_sporuri = 800;
	b.ora_sp = 1000;
	b.nr_ore_sp = 4;

	angajat c;
	c.nume = "Andrei";
	c.functie = "Operator";
	c.departament = "customer-relations";
	c.salariu_baza = 3000;
	c.total_sporuri = 800;
	c.ora_sp = 200;
	c.nr_ore_sp = 5;

	angajat ang[3] = { a,b,c };

	int salMax = salariuMaxum(ang, 3);
	cout << "Salariu maxim este: " << salMax << endl;
	int oreSupl = numarTotalOreSuplimentareMarketing(ang, 3);
	cout << "Numarul maxim de ore din departamentul marketing este: " << oreSupl << endl;


}
void sol3() {
	//Structura student memorează numele, grupa, anul de studiu al unui student, numărul de credite obținute la disciplinele de studiu(nr_credite).
	//Câmpul bursa este necompletat inițial şi se va completa cu valoarea "Da", dacă studentul va primi bursă sau "Nu", în caz contrar. 
	//Condiția de primire a bursei este ca studentul să aibă minimum 30 de credite obținute. Vectorul st memorează datele pentru 300 de studenţi.
	//Scrie o secvență de instrucțiuni C++ care conține declarații de variabile și instrucțiuni pentru :
	//	a) completarea câmpului bursa pentru studenți, conform condițiilor anterioare;
	//	b) afişarea datelor studenților(nume, an studiu, grupa) pentru studenții care vor primi bursă.

	student a;
	a.nume = "Andrei";
	a.grupa = 1;
	a.an_studiu = 4;
	a.nr_credite = 31;

	student b;
	b.nume = "Mihai";
	b.grupa = 3;
	b.an_studiu = 2;
	b.nr_credite = 30;
	
	student c;
	c.nume = "Denis";
	c.grupa = 2;
	c.an_studiu = 1;
	c.nr_credite = 28;

	student stdn[3] = { a,b,c };

	afisareStudentiCuBursa(stdn, 3);

}
void sol4() {
	//Structura examinare memorează disciplina de studiu, tipul de examinare al disciplinei (scris,oral, proiect) și număr de credite obținute la examinare = [0, 7].Structura student memorează numele, grupa, anul de studiu, numărul total de credite obținute din toate examinările denumit nr_total_credite, care nu este completat inițial și numărul de credite obținut la fiecare disciplină(dat de vectorul e).Vectorul st memorează informații pentru 200 de studenţi 
	//Scrie o secvență de instrucțiuni C++ care conţine declarații de variabile și instrucțiuni pentru :
	//	a) completarea câmpului nr_total_credite pentru toți studenţii;
	//	b) afişarea datelor studenților(nume, an studiu, grupa, disciplina) care au obținut credite la proiecte;
	//	c) afișarea numărului total de credite de valoare maximă obținut de studenţi.
}
void sol5() {
	//Structura data memorează o dată calendaristică. Structura spectacol memorează denumirea, autorul, data desfăşurării unui spectacol de teatru(data_sp).Câmpul nr_bilete reprezintă numărul de bilete vândute pentru spectacol.Câmpul preț reprezintă prețul unui bilet la spectacol.Vectorul sp memorează date despre 50 de spectacole desfăşurate.
	//Scrie o secvență de instrucțiuni C++ care conține declarații de variabile și instrucțiuni pentru :
	//a) determinarea și afișarea sumei încasate din vânzarea biletelor pentru toate spectacolele desfăşurate în luna mai din anul 2019;
	//b) determinarea şi afişarea datelor calendaristice în care au fost susținute spectacole cu piese de I.L.Caragiale.

	spectacol a;
	a.denumire = "Vals";
	a.autor = "IL Caragiale";
	a.nr_bilete = 50;
	a.pret = 10;
	a.data_sp.zi = 1;
	a.data_sp.luna = "mai";
	a.data_sp.an = 2019;

	spectacol b;
	b.denumire = "Peste Dunare";
	b.autor = "Caragiale";
	b.nr_bilete = 503;
	b.pret = 12;
	b.data_sp.zi = 1;
	b.data_sp.luna = "mai";
	b.data_sp.an = 2019;

	spectacol c;
	c.denumire = "Dans";
	c.autor = "IL Caragiale";
	c.nr_bilete = 500;
	c.pret = 15;
	c.data_sp.zi = 1;
	c.data_sp.luna = "august";
	c.data_sp.an = 2018;

	spectacol spct[3] = { a,b,c };

	int bil = sumaIncasataMai(spct, 3);
	cout << "Suma de bilete incasata in mai 2019 din toate spectacole este: " << bil << endl;

	afisareIL(spct, 3);

}