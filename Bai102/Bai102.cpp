#include <iostream>
#include <cmath>
using namespace std;

float DoChinhXac();

int main()
{
	cout << "s = ";
	cout << DoChinhXac();
	return 0;
}

float DoChinhXac()
{
	double s = 0;
	float e = 0.5;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}