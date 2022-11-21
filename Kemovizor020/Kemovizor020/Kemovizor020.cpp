#include <iostream>
using namespace std;

int unosn() {
	int n;
	do
	{
		cout << "Unesite n, 10 <= n <= 99: " << endl;
		cin >> n;
	} while (n < 10);
	return n;
}

int main() {
	int n = unosn();
	for (int i = 10; i <= n; i++)
	{
		if (i%3==0 && i%100==33)
		{
			cout << i << " ";
		}
	}
}