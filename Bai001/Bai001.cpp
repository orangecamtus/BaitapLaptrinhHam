#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
void Xuat(float, float);
float KhoangCach(float, float, float, float);
int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	cout << "\nDiem thu nhat: ";
	Xuat(x1, y1);
	cout << "\nDiem thu hai: ";
	Xuat(x2, y2);
	cout << "\nKhoang cach: ";
	cout << KhoangCach(x1, y1, x2, y2);
	return 1;
}
void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}
void Xuat(float xx, float yy)
{
	cout << "\n Hoanh do: " << xx;
	cout << "\n Tung do: " << yy;
}
float KhoangCach(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}