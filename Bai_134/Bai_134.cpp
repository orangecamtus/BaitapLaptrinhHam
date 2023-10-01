#include <iostream>
#include <cmath>
using namespace std;

void ktraBDT(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;
	ktraBDT(x, y, z);
	return 0;
}

void ktraBDT(float xx, float yy, float zz)
{
	if (xx <= yy && yy <= zz)
		cout << "BDT dung";
	else
		cout << "BDT sai";
}