#include <iostream>
using namespace std;
void Nhap(float&);
float TinhVaXuat(float);
int main()
{
	float x;
	Nhap(x);
	cout << "x^13 co gia tri: " << TinhVaXuat(x);
	return 0;
}
void Nhap(float& xx)
{
	cout << "Nhap x: ";
	cin >> xx;
}
float TinhVaXuat(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x5 = x4 * xx;
	float x8 = x4 * x4;
	float x13 = x8 * x5;
	return x13;
}