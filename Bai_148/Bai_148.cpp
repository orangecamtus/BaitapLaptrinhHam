#include <iostream>
#include <cmath>
using namespace std;

void KtraSoChan(int);

int main()
{
	int n, flag, t, dv;
	cout << "Nhap n = ";
	cin >> n;
	KtraSoChan(n);
	return 0;
}

void KtraSoChan(int nn)
{
	int flag, t, dv;
	flag = 1;
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "La so toan chan";
	else
		cout << "khong la so toan chan";
}