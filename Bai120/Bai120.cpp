#include <iostream>
#include <cmath>
using namespace std;

void TimSoHang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	TimSoHang(n);
	return 0;
}

void TimSoHang(int nn)
{
	float ahh;
	int at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	cout << "ahh = " << ahh;
}