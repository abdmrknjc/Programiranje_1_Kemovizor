#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float suma = 0;
	int n;
	do{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<0);
	for (int i = n; i <= 2*n; i++){
		suma = suma + pow(2,i - 2);
	}
	cout << "Suma je: " << suma << endl;
	return 0;
}