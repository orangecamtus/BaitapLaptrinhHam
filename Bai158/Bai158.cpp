#include <iostream>
#include <cmath>
using namespace std;

int Dem(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "So luong chu so lon nhat la: " << Dem(n);
	return 0;
}

int Dem(int nn)
{
	int lc, dem, t, dv;
	lc = nn % 10;
	dem = 0;
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem = dem++;
		t = t / 10;
	}
	return dem;
}