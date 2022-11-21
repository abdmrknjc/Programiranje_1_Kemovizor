#include <iostream>
using namespace std;

/*Napisati programski kod za racunanje proizvoda/produkta:
P=1/10 i od 1 do 10 i
*/

int main() {
	float produkt=1;
	for (int i = 1; i <= 10; i++)
	{
		produkt = produkt * i;
	}
	produkt /= 10;
	cout << "Rezultat je: " << produkt << endl;
	return 0;
}