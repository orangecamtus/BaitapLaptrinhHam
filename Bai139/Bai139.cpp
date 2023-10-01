#include <iostream>
using namespace std;
void Giai(float, float);
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	Giai(a, b);
	return 0;
}
void Giai(float aa, float bb)
{
	if (aa == 0)
	{
		if (bb == 0)
			cout << "VSN";
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x = (- bb) / aa;
		cout << x;
	}
		
}