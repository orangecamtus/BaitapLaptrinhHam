#include <iostream>
#include <cmath>
using namespace std;

float Tong(int, int);

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
float Tong(int xx, int nn)
{
	float s = 1;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + (i + 1) * t;
		i = i + 1;
	}
	return s;
}