#include <iostream>
#include <cmath>
using namespace std;

void KtrSDX(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	KtrSDX(n);
	return 0;
}

void KtrSDX(int nn)
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
	if (dn == nn)
		cout << "La doi xung";
	else
		cout << "Khong la doi xung";
}