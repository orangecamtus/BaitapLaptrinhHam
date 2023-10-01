#include <iostream>
#include <cmath>
using namespace std;

int BCNN(int, int);

int main()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "BCNN = " << BCNN(a, b);
	return 0;
}

int BCNN(int aa, int bb)
{
	int m, n, bcnn;
	m = abs(aa);
	n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		n = n - m;
	}
	bcnn = abs(aa * bb) / (m + n);
	return bcnn;
}