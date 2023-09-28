#include <iostream>
#include <cmath>
using namespace std;
int TongUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << TongUocSo(n);
	return 0;
}
int TongUocSo(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s += i;
		i++;
	}
	return s;
}
