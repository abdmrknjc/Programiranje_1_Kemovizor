#include <iostream>
using namespace std;

/*Neka je data formula za racunanje sume S:
S=1/100 i=1 do 100 i

Potrebno je pretvoriti datu formulu u programski kod.
*/

int main() {
	float suma = 0;
	for (int i = 1; i <= 100; i++) // i ide do 100 i ukljucuje 100!
	{
		suma = suma + i;

	}
	float konacnasuma = suma / 100;
	cout << "Suma je: " << konacnasuma;
	return 0;
}