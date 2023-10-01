
#include <iostream>
#include <cmath>
using namespace std;

float Tong(int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int lc = n % 10;
	int t = n;

	cout << "Chu so lon nhat la: ";
	cout << Tong(t, lc);
	return 0;
}
float Tong(int tt, int lc)
{
	while (tt != 0)
	{
		int dv = tt % 10;
		if (dv > lc)
			lc = dv;
		tt = tt / 10;
	}
	return lc;
}