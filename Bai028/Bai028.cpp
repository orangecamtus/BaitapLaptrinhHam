#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;

	cout << "Tong s = ";
	cout << Tong(s, i, n);
	return 0;
}
float Tong(float ss, int ii, int nn)
{
	while (ii <= nn)
	{
		ss = ss + ii * ii;
		ii = ii + 1;
	}
	return ss;
}
