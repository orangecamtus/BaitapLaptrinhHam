#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void TinhBac2(float, float, float);

int main()
{
	float a, b, c;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;

	TinhBac2(a, b, c);
	return 0;
}

void TinhBac2(float aa, float bb, float cc)
{
	float x, x1, x2;
	float delta = bb * bb - 4 * aa * cc;
	if (delta <= 0)
	{
		if (delta == 0)
		{
			x = (float)-bb / 2 * aa;
			cout << "x = " << x;
		}
		else
			cout << "Vo nghiem";
	}
	else
	{
		x1 = (-bb + sqrt(delta)) / 2 * aa;
		x2 = (-bb - sqrt(delta)) / 2 * aa;
	}
	cout << "x1 = " << x1;
	cout << "\nx2 = " << x2;
}