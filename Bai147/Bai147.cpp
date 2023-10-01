#include <iostream>
using namespace std;
int KT(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KT(n) == 1)
		cout << "Toan le";
	else
		cout << "Khong toan le";
	return 0;
}
int KT(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}