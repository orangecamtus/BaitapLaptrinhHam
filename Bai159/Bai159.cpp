#include <iostream>
using namespace std;
int Dem(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Dem(n);
}
int Dem(int nn)
{
	int lc = nn % 10;
	int dv;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem++;
		t = t / 10;
	}
	return dem;
}