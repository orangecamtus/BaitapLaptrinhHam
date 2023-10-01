#include <iostream>
#include <cmath>
using namespace std;
int Tim(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Tim(n);
	return 0;
}
int Tim(int nn)
{
	int t = nn;
	int lc = nn % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
