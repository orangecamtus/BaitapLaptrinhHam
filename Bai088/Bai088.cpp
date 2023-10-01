#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "s = ";
	cout << Tong(n);
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	float m = 0;
	int i = 1;
	int dau = +1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)dau / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}