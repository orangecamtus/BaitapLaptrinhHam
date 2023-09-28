#include <iostream>
using namespace std;
void Nhap(float&);
void Xuat(float);
float Tinh(float);
int main()
{
	float f, c;
	Nhap(f);
	c = Tinh(f);
	Xuat(c);
	return 0;
}
void Nhap(float& ff)
{
	cout << "Nhap do F: ";
	cin >> ff;
}
void Xuat(float cc)
{
	cout << "Do C la: " << cc;
}
float Tinh(float ff)
{
	return (float)5 / 9 * (ff - 32);
}