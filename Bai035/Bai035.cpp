#include <iostream>
using namespace std;
int GiaiThua(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << n << "!= ";
	cout << GiaiThua(n);
	return 0;
}
int GiaiThua(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i++;
	}
	return t;
}
