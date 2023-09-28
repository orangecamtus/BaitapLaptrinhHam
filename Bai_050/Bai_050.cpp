#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;

	cout << "Tong cac uoc so = ";
	cout << Tong(s, i, n);
	return 0;
}

float Tong(float ss, int ii, int nn)
{
	while (ii <= nn)
	{
		if (nn % ii == 0)
			ss = ss + ii;
		ii = ii + 1;
	}
	return ss;
}


