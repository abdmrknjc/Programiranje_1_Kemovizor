#include<iostream>
using namespace std;

int main() {
	float suma = 0;
	int n;
	do
	{
		cout << "Unesite n, n > 5: " << endl;
		cin >> n;
	} while (n<5);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 5; j <= 10; j++)
		{
			suma += (pow(i, 2) * j - pow(j, 2) * i);
		}
	}
	cout << "Suma je: " << suma << endl;
}