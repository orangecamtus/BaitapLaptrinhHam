#include <iostream>
using namespace std;
float Tinh(float);
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << Tinh(x);
}
float Tinh(float xx)
{
	float f;
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	return f;
}