#include <iostream>
using namespace std;
int TonTaiLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (TonTaiLe(n) == 1)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";
	return 0;
}
int TonTaiLe(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}
