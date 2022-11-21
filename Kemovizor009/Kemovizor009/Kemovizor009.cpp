#include <iostream>
using namespace std;

int main() {
	int n;
	float suma = 0;
	do{
		cout << "Unesite n, 1 < n < 16 " << endl;
		cin >> n;
	} while (n<1 || n>16);
	for (int i = 1; i <= n; i++){
		suma += pow(i, 2);
		for (int j = 5; j <= 10; j++){
			suma += pow(i - j, 2) / pow(j, 2);
		}
	}
	cout << "Suma je: " << suma << endl;
}