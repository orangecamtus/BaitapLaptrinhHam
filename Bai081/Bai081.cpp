#include <iostream>
#include <cmath>
using namespace std;
float Tinh(float, int);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Tinh(x, n);
	return 0;
}
float Tinh(float xx, int nn)
{
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= nn)
	{
		m = m * (xx + i);
		s += (float)1 / m;
		i = i + 1;
	}
	return s;
}