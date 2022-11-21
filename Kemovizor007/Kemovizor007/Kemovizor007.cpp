#include <iostream>
using namespace std;

int main() {
	float suma = 0;
	for (int i = -10; i <=10; i++)
	{
		suma+=pow(i, 2);
	}
	for (int i = -5; i <= 5; i++)
	{
		suma=suma-i;
	}
	suma *= 1 / sqrt(5);
	cout << "Suma je: " << suma << endl;
	return 0;
}