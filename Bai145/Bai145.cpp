#include <iostream>
using namespace std;
int KT(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KT(n) == 1)
		cout << "Chinh phuong";
	else
		cout << "Khong chinh phuong";
	return 0;
}
int KT(int nn)
{
	int flag = 0;
	int i = 1;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i++;
	}
	return 1;
}