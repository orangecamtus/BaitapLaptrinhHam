#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&);
void Xuat(float);
float TheTich(float);
int main()
{
	float r, v;
	Nhap(r);
	v = TheTich(r);
	Xuat(v);
	return 0;
}
void Nhap(float& rr)
{
	cout << "Nhap ban kinh r: ";
	cin >> rr;
}
void Xuat(float vv)
{
	cout << "The tich la: " << vv;
}
float TheTich(float rr)
{
	return (float)4 / 3 * M_PI * rr * rr * rr;
}