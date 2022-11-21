#include <iostream>
using namespace std;

int unosn() {
	int n;
	do
	{
		cout << "Unesite n, 10 <= n <= 99: " << endl;
		cin >> n;
	} while (n<10 || n>99);
	return n;
}

int main() {
	int n = unosn();
	for (int i = 10; i <= n; i++)
	{
		int broj1 = i / 10;
		int broj2 = i % 10;
		if (broj1+broj2<broj1*broj2)
		{
			cout << i << " ";
		}
	}
}