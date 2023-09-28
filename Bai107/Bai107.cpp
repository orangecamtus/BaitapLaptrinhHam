#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Tinh(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float xx = (x * M_PI) / 180;
	cout << Tinh(xx);
	return 0;
}
float Tinh(float xx)
{
	float s = 1;
	float t = 1;
	float m = 1;
	float e = 1;
	float dau = -1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		e = t / m;
		s += dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}