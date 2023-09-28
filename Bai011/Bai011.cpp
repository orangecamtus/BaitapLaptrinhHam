#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
float Xuat(float, float, float, float);
float DaiCanh(float, float, float, float);
float ChuVi(float, float, float);
int main()
{
	float x1, y1;
	cout << "Nhap diem thu nhat: ";
	Nhap(x1, y1);
	float x2, y2;
	cout << "Nhap diem thu hai: ";
	Nhap(x2, y2);
	float x3, y3;
	cout << "Nhap diem thu ba: ";
	Nhap(x3, y3);
	float a = DaiCanh(x1, y1, x2, y2);
	float b = DaiCanh(x3, y3, x2, y2);
	float c = DaiCanh(x1, y1, x3, y3);
	float p = ChuVi(a, b, c);
	cout << Xuat(p, a, b, c);
}
void Nhap(float& xx, float& yy)
{
	cout << "\nNhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}
float Xuat(float pp, float aa, float bb, float cc)
{
	cout << "Dien tich la: ";
	return sqrt(pp * (pp - aa) * (pp - bb) * (pp - cc));
}
float DaiCanh(float x1, float y1, float x2, float y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
float ChuVi(float aa, float bb, float cc)
{
	return (float)1 * (aa + bb + cc) / 2;
}