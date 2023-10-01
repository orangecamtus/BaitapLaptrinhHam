#include <iostream>
#include <cmath>
using namespace std;

int XuLi(int);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;

	cout << "x6 = ";
	cout << XuLi(x);
}

int XuLi(int xx)
{
	int x2 = xx * xx;
	int x4 = x2 * x2;
	int x6 = x4 * x2;
	return x6;
}