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
	int att = 1;
	int at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}