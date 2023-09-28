#include <iostream>
#include <cmath>
using namespace std;
float Tinh(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Tinh(n);
	return 0;
}
float Tinh(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = pow(i + s, (float)1 / (i + 1));
		i = i + 1;
	}
	return s;
}