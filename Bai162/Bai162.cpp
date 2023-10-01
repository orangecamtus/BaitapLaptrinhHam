#include <iostream>
#include <cmath>
using namespace std;

void Ktra(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	Ktra(n);
	return 0;
}

void Ktra(int nn)
{
	int flag, t, dv, hc;
	flag = 1;
	t = nn;
	while (t >= 10)
	{
		dv = t % 10;
		hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Giam";
	else
		cout << "Khong giam";
}