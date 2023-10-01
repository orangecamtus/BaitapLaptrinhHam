#include <iostream>
#include <cmath>
using namespace std;

float TinhCan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "s = ";
	cout << TinhCan(n);
	return 0;
}

float TinhCan(int nn)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = pow(t + s, (float)1 / (1 + i));
		i = i + 1;
	}
	return s;
}