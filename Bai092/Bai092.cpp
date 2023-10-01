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
	float s = 1 - xx;
	float t = xx;
	int m = 1;
	int i = 3;
	int dau = 1;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}