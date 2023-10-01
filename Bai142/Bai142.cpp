#include <iostream>
#include <cmath>
using namespace std;

int DaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "dn = " << DaoNguoc(n);
	return 0;
}

int DaoNguoc(int nn)
{
	int dn, t, dv;
	dn = 0;
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}