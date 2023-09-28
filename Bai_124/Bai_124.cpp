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
	int at = 2;
	int bt = 1;
	int i = 2;
	float ahh, bhh;
	while (i <= nn)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
		cout << "ahh = " << ahh;
		cout << "\nbhh = " << bhh;
	}
}