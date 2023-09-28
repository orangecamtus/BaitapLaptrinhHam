#include <iostream>
using namespace std;
void XetTamGiac(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap canh 1: ";
	cin >> x;
	cout << "Nhap canh 2: ";
	cin >> y;
	cout << "Nhap canh 3: ";
	cin >> z;
	XetTamGiac(x, y, z);
}
void XetTamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && xx + zz > yy)
	{
		if (xx == yy && yy == zz)
			cout << "Deu";
		else
		{
			if (xx * xx == yy * yy + zz * zz || yy * yy == xx * xx + zz * zz || zz * zz == xx * xx + yy * yy)
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "Vuong can";
				else
					cout << "Vuong";
			}
			else
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "Can";
				else
					cout << "Thuong";
			}
		}
	}
	else
		cout << "Khong la tam giac";
}