#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float Chuvi(float, int);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu vi: ";
	cout << Chuvi(r, n);
	return 0;
}

float Chuvi(float rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}