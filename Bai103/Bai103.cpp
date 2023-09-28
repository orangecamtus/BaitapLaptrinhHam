#include <iostream>
#include <cmath>
using namespace std;
float Tinh();
int main()
{
	cout << "Ket qua: ";
	cout << Tinh();
	return 0;
}
float Tinh()
{
	float s = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s += e;
		i = i + 2;
	}
	return s;
}