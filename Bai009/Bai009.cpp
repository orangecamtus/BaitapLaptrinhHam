#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, int&);
void Xuat(float);
float DienTich(float, int);
int main()
{
	float r, s;
	int n;
	Nhap(r, n);
	s = DienTich(r, n);
	Xuat(s);
	return 0;
}
void Nhap(float& rr, int& nn)
{
	cout << "Nhap ban kinh r: ";
	cin >> rr;
	cout << "Nhap so canh cua da giac deu: ";
	cin >> nn;
}
void Xuat(float ss)
{
	cout << "Dien tich la: " << ss;
}
float DienTich(float rr, int nn)
{
	return (float)1 / 2 * nn * rr * rr * sin(2 * M_PI / nn);
}