#include <iostream>
using namespace std;

int main() {
	float suma = 0;
	for (int i = 1; i <= 5; i++)
	{
		float faktorijel = 1;
		for (int j = 1; j <= i; j++)
		{
			faktorijel *= j;
		}
		suma = suma + faktorijel;
	}
	cout << "Suma je: " << suma << endl;
}