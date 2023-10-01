#include <iostream>
#include <cmath>
using namespace std;

float Tich(float, int, int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	float t = 1;
	int i = 1;

	cout << "T = ";
	cout << Tich(t, i, n, x);
	return 0;
}
float Tich(float tt, int ii, int nn, int xx)
{
	while (ii <= nn)
	{
		tt = tt * xx;
		ii = ii + 1;
	}
	return tt;
}
