#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int);

int main()
{

	int x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong s = ";
	cout << Tong(x, n);
	return 0;
}
float Tong(float xx, int nn)
{
	float s = 0;
	float t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = sin(t);
		s = s + t;
		i = i + 1;
	}
	return s;
}