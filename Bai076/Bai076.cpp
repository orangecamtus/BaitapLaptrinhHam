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
	float s = 1 + xx;
	int t = xx;
	int m = 1;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}