#include<iostream>
using namespace std;

int main() {
	int n;
	float produkt = 1;
	do{
		cout << "Unesite n, 1 <= n <= 10: " << endl;
		cin >> n;
	} while (n < 1 || n > 10);
	for (int i = 1; i <= n; i++)
	{
		produkt *= pow(i + 1, -1);
	}
	cout << "Produkt je: " << produkt << endl;
	return 0;
}