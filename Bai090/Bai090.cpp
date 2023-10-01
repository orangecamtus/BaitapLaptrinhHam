#include <iostream>
#include <cmath>
using namespace std;

float Tong(int, int);

int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;

	cout << "s = ";
	cout << Tong(x, n);
	return 0;
}

float Tong(int xx, int nn)
{
	float s = 0;
	float t = 1;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + (float)dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}