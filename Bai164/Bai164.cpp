#include <iostream>
#include <cmath>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "s = " << Tinh(n);
	return 0;
}

float Tinh(int nn)
{
	float s = 1;
	float i = 1;
	while (i <= nn)
	{
		s = (float)1 / (1 + s);
		i = i + 1;
	}
	return s;
}