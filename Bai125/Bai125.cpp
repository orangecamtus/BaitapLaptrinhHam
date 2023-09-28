#include <iostream>
using namespace std;
void Thay(float, float);
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	Thay(a, b);
	return 0;
}
void Thay(float aa, float bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
	cout << "a la: " << aa;
	cout << "\nb la: " << bb;
}