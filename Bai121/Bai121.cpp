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
	if (nn == 0)
		return 1;
	if (nn == 1)
		return 1;
	float att = 1;
	float ahh;
	float at = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}