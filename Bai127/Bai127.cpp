#include <iostream>
using namespace std;
void Tim(float, float);
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	Tim(a, b);
	return 0;
}
void Tim(float aa, float bb)
{
	float lc = aa;
	if (lc > bb)
		lc = bb;
	cout << "Gia tri nho nhat: " << lc;
}