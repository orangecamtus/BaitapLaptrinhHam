#include <iostream>
using namespace std;
void KT(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	KT(n);
}
void KT(int nn)
{
	int dv, hc;
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		dv = t % 10;
		hc = (t / 10) % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Tang";
	else
		cout << "Khong tang";
}