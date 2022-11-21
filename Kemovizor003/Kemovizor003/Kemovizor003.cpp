#include <iostream>
#include <cmath>
using namespace std;


/*
Napisati programski kod za racunanje sume s na osnovu sljedece formule:

Potrebno je unijeti cjelobrojnu vrijednost n, takvu da se nalazi u zadanom opsegu vrijednosti (1 <= n <= 100)
(ponavljati unos u slucaju da je n izvan opsega). Zatim je potrebno uraditi sumiranje svih
vrijednosti, te ispis konacne vrijednosti sume s.
Hint #1: Koristiti do while petlju za ponavljanje unosa n u slucaju da se n ne nalazi u zadanom opsegu.*/


int unosn() {
	int n;
	do
	{
		cout << "Unesite n (1 <= n <= 100)" << endl;
		cin >> n;
	} while (n<=1 || n>=100);
	return n;
}

float izracun(int n) {
	float rezultat = 0;
	for (size_t i = 1; i <= n; i++)
	{
		rezultat = rezultat + (pow(i, 2)) / sqrt(i);
	}
	return rezultat;
}
int main() {
	int n = unosn();
	cout << "Rezultat je: " << izracun(n);
	return 0;
}