#include <iostream>
#include <cmath>
using namespace std;

float TimSoHang(float);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "ahh = ";
	cout << TimSoHang(n);
	return 0;
}
float TimSoHang(float nn)
{
	int ahh;
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}