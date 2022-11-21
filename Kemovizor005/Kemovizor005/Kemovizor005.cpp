#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float suma = 0;
	int n;
	do
	{
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n<-5 || n==0);
	
	for (int i = -5; i <= n; i++)
	{
		suma = suma + abs(float(i) / n);
	}
	cout << "Suma je: " << suma << endl;
}