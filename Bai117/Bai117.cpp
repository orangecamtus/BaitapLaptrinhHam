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
	float t = 2;
	int i = 2;
	while (i <= nn)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}