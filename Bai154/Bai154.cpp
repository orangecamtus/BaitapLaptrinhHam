#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void DaySo(float);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	DaySo(n);
	return 0;
}

void DaySo(float nn)
{
	int ahh;
	ahh = nn;
	cout << ahh;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout << setw(4) << ahh;
	}
}