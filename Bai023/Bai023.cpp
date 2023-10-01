#include <iostream>
using namespace std;
void Nhap(int&);
int TinhVaXuat(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Chu so hang chuc cua so nguyen n la: " << TinhVaXuat(n);
	return 0;
}
void Nhap(int& nn)
{
	cout << "Nhap so nguyen n: ";
	cin >> nn;
}
int TinhVaXuat(int nn)
{
	int hc = (nn / 10) % 10;
	return hc;
}