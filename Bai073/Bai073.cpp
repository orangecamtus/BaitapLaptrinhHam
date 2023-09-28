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
	float t = 1;
	float m = 0;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m + i;
		s += t / m;
		i = i + 1;
	}
	return s;
}