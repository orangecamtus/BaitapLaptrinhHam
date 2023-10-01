#include <iostream>
#include <cmath>
using namespace std;

float Chuyendo(float);

int main()
{
	float c;
	cout << "Nhap do C: ";
	cin >> c;

	cout << "Do F la: ";
	cout << Chuyendo(c);
	return 0;
}

float Chuyendo(float cc)
{
	return (float)9 / 5 * cc + 32;
}