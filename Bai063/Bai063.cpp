#include <iostream>
#include <cmath>
using namespace std;
int Tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Tich(n);
	return 0;
}
int Tich(int nn)
{
	int t = nn;
	int tich = 1;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
