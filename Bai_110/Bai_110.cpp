#include <iostream>
#include <cmath>
using namespace std;

float DoChinhXac(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "Leibniz pi = ";
	cout << DoChinhXac(n);
	return 0;
}

float DoChinhXac(int nn)
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}