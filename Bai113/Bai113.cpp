#include <iostream>
#include <cmath>
using namespace std;
float Tinh(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Tinh(n);
	return 0;
}
float Tinh(int nn)
{
	float at = 2;
	float ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}