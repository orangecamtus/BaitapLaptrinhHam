#include <iostream>
#include <cmath>
using namespace std;
void Tinh(float, float, float, float, float, float);
int main()
{
	float x1, y1;
	cout << "Nhap toa do dinh A: ";
	cin >> x1 >> y1;
	float x2, y2;
	cout << "Nhap toa do dinh B: ";
	cin >> x2 >> y2;
	float x3, y3;
	cout << "Nhap toa do dinh C: ";
	cin >> x3 >> y3;
	Tinh(x1, y1, x2, y2, x3, y3);
	return 0;
}
void Tinh(float xa, float ya, float xb, float yb, float xc, float yc)
{
	float a = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
	float b = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));
	float c = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
	if (a + b > c && a + c > b && b + c > a)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
}