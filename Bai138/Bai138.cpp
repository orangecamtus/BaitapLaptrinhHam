#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tinh(int);

int main()
{
	float x, f;
	cout << "Nhap x = ";
	cin >> x;

	cout << "f = ";
	cout << Tinh(x);
	return 0;
}

float Tinh(int xx)
{
	float f;
	if (xx >= 0)
	{
		if (xx <= 1)
			f = 2 * xx * xx * xx + 5 * xx * xx - 8 * xx + 3;
		else
			f = 5 * xx - 7;
	}
	else
		f = 2 * xx * xx * xx + 6 * xx + 9;
	return f;
}