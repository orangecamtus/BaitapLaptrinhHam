#include <iostream>
#include <cmath>
using namespace std;

float XuLi(int);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;

	cout << "x14 = ";
	cout << XuLi(x);
}

float XuLi(int xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x8 = x4 * x4;
	float x14 = x8 * x6;
	return x14;
}