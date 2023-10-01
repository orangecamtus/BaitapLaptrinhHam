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
	int i = 1;
	while (i <= nn)
	{
		s = sqrt(i + s);
		i = i + 1;
	}
	return s;
}