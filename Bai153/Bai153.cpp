#include <iostream>
using namespace std;
int KT(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KT(n) == 1)
		cout << "La dang";
	else
		cout << "Khong la dang";
	return 0;
}
int KT(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;
	}
	return flag;
}