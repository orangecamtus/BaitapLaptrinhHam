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
	float s = xx;
	float t = xx;
	int i = 3;
	float dau = -1;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s += dau * t;
		i = i + 2;
		dau = -dau;
	}
	return s;
}