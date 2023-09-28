#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&);
void Xuat(float);
float ChuVi(float);
int main()
{
	float r, p;
	Nhap(r);
	p = ChuVi(r);
	Xuat(p);
	return 0;
}
void Nhap(float& rr)
{
	cout << "Nhap ban kinh r: ";
	cin >> rr;
}
void Xuat(float pp)
{
	cout << "Chu vi la: " << pp;
}
float ChuVi(float rr)
{
	return 2 * M_PI * rr;
}