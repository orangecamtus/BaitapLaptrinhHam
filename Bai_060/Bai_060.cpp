#include <iostream>
#include <cmath>
using namespace std;

float Tich(int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tich = 1;
	int t = n;

	cout << "Tich cac chu so la: ";
	cout << Tich(t, tich);
	return 0;
}
float Tich(int tt, int tichtich)
{
	while (tt != 0)
	{
		int dv = tt % 10;
		tichtich = tichtich * dv;
		tt = tt / 10;
	}
	return tichtich;
}