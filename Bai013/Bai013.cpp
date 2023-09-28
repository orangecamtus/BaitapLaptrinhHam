#include <iostream>
using namespace std;
void Nhap(float&);
float TinhVaXuat(float);
int main()
{
	float x;
	Nhap(x);
	cout << "x^7 co gia tri: " << TinhVaXuat(x);
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
	float x8 = x4 * x4;
	float x7 = x8 / xx;
	return x7;
}