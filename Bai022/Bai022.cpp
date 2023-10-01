#include <iostream>
#include <cmath>
using namespace std;

int DonVi(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "Chu so hang don vi la: ";
	cout << DonVi(n);
}

int DonVi(int nn)
{
	int dv = nn % 10;
	return dv;
}