#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float DoChinhXac(float);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;

	cout << "sin(x) = ";
	cout << DoChinhXac(x);
	return 0;
}

float DoChinhXac(float y)
{
	float xx = (y * M_PI) / 180;
	float s = xx;
	float t = xx;
	int m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = s + dau * e;
		i = i + 2;
	}
	return s;
}