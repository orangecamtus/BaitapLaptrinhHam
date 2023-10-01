#include <iostream>
#include <cmath>
using namespace std;
int Timk(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "k = " << Timk(n);
	return 0;
}

int Timk(int nn)
{
	int t, k;
	t = 1;
	k = 1;
	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}