#include <iostream>
#include <cmath>
using namespace std;

void HoanVi(int&, int&);

int main()
{
	int a;
	cout << "Nhap a = ";
	cin >> a;
	int b;
	cout << "Nhap b = ";
	cin >> b;
	cout << "\nTruoc hoan vi: ";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	HoanVi(a, b);
	cout << "\nSau hoan vi: ";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	return 0;
}

void HoanVi(int& aa, int& bb)
{
	int ss = aa + bb;
	bb = ss - bb;
	aa = ss - bb;
}