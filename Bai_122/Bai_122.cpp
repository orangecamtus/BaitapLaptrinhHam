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
	int at = 1;
	int bt = 1;
	int i = 2;
	float ahh, bhh;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
		cout << "ahh = " << ahh;
		cout << "\nbhh = " << bhh;
	}
}