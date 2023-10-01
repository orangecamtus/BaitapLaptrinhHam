#include <iostream>
#include <cmath>
using namespace std;

float TimSoHang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "ahh = ";
	cout << TimSoHang(n);
	return 0;
}

float TimSoHang(int nn)
{
	float ahh;
	int at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}