#include <iostream>
#include <cmath>
using namespace std;

void ktratamgiac(int, int, int);

int main()
{
	float x, y, z;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;
	ktratamgiac(x, y, z);
	return 0;
}

void ktratamgiac(int xx, int yy, int zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
}