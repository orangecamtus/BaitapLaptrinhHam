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
	float s = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s += e;
		i = i + 1;
	}
	return s;
}