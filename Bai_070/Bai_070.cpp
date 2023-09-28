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
	float s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}