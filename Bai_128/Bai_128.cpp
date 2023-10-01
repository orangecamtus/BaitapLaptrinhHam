#include <iostream>
#include <cmath>
using namespace std;

float HoanDoi(float, float);

int main()
{
	float a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;

	cout << "Gia tri lon nhat la = " << GTLN(a, b);
	return 0;
}

float GTLN(float aa, float bb)
{
	float lc = aa;
	if (lc < bb)
		lc = bb;
	return lc;
}