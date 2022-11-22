#include <iostream>
using namespace std;

/*Napisati program koji omogucuje korisniku unos dana, mjeseca i godine.
Potrebno je ispisati da li je uneseni datum validan ili ne.
Voditi racuna o tome da korisnik moze unijeti prijestupnu godinu.
Zabranjuje se unos negativnih te drugih nevalidnih vrijednosti tipa dan > 31 ili mjesec > 12.
Metoda za utvrdjivanje da li je godina prijestupna je sljedeca:
int godina = 2012;
bool prijestupna = ((godina % 4 == 0) && (godina % 100 != 0)) || (godina % 400 == 0);
*/


bool prestupna(int godina) {
	return (((godina % 4 == 0) && (godina % 100 != 0)) || (godina % 400 == 0));
}

bool ukupanBrojDana(int mjesec, int godina) {
	switch (mjesec)
	{
	case 2:
		return prestupna(godina) ? 29 : 28;
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
	default:
		return 30;
	}
}

bool isValidan(int d, int m, int g) {
	return d <= ukupanBrojDana(m, g); // ukoliko je vrijednost 'd' manja ili jednaka od max. broja dana (za taj mjesec i godinu), tada je datum validan
}

int main() {
	int dan;
	do {
		cout << "Unesite dan: " << endl;
		cin >> dan;
	} while (dan < 1 || dan>31);

	int mjesec;
	do {
		cout << "Unesite mjesec: " << endl;
		cin >> mjesec;
	} while (mjesec < 1 || mjesec>12);
	int godina;
	do {
		cout << "Unesite godinu: " << endl;
		cin >> godina;
	} while (godina < 1);

	cout << "Datum" << (isValidan(dan,mjesec,godina) ? " je " : " nije ") << "validan" << endl;
}


