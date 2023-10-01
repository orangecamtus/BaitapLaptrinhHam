#include <iostream>
#include <cmath>
using namespace std;
float TongDanDau(int, int);
int main()

{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;


	cout << "s = ";
	cout << TongDanDau(x, n);
	return 0;
}

float TongDanDau(int xx, int nn)
{
	float s = 0;
	float t = 1;
	int i = 2;
	int dau = -1;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	return s;
}