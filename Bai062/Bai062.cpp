
#include <iostream>
#include <cmath>
using namespace std;

float Tong(int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int t = n;

	cout << "Tong cac chu so chan la: ";
	cout << Tong(t, s);
	return 0;
}
float Tong(int tt, int ss)
{
	while (tt != 0)
	{
		int dv = tt % 10;
		if (dv % 2 == 0)
			ss = ss + dv;
		tt = tt / 10;
	}
	return ss;
}