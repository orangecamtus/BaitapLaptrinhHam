#include <iostream>
#include <cmath>
using namespace std;

int HangTram(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "Chu so hang don vi la: ";
	cout << HangTram(n);
}

int HangTram(int nn)
{
	int ht = (nn / 100) % 10;
	return ht;
}