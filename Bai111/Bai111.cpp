#include <iostream>
#include <cmath>
using namespace std;
float Tinh();
int main()
{
	cout << Tinh();
	return 0;
}
float Tinh()
{
	float s = 3;
	float dau = 1;
	float e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s += dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}