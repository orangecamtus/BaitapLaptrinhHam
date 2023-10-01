#include <iostream>
#include <cmath>
using namespace std;

void KtraSNT(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	KtraSNT(n);
	return 0;
}

void KtraSNT(int nn)
{
	int dem, i;
	dem = 0;
	i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2)
		cout << "La so nguyen to";
	else
		cout << "khong la so nguyen to";
}