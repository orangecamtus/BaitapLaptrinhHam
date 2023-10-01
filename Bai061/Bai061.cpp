#include <iostream>
#include <cmath>
using namespace std;
int DemSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << DemSo(n);
	return 0;
}
int DemSo(int nn)
{
	int t = nn;
	int dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	return dem;
}
