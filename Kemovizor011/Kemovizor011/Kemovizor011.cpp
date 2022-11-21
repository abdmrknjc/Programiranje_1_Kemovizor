#include<iostream>
using namespace std;

int main() {
	float produkt = 1;
	for (int i = 1; i <= 10; i++){	
		float suma = 0;
		for (int j = -5; j <= 5; j++){
			suma+= (i - 1) * (1 - j);
		}
		produkt *= suma;
	}
	cout << "Produkt je: " << produkt << endl;
}