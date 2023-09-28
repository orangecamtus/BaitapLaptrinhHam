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
	if (nn == 1)
		return 2;
	float ahh;
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = (at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}