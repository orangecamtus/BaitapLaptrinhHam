#include <iostream>
using namespace std;
void Tim(float, float, float);
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float c;
	cout << "Nhap c: ";
	cin >> c;
	Tim(a, b, c);
	return 0;
}
void Tim(float aa, float bb, float cc)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
	if (aa > cc)
	{
		temp = aa;
		aa = cc;
		cc = temp;
	}
	if (bb > cc)
	{
		temp = bb;
		bb = cc;
		cc = temp;
	}
	cout << "gia tri tang dan: " << " " << aa << " " << bb << " " << cc;
}