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
		return -1;
	if (nn == 1)
		return 3;
	float att = -1;
	float ahh;
	float at = 3;
	int i = 2;
	while (i <= nn)
	{
		ahh = 5 * at + 6 * att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}