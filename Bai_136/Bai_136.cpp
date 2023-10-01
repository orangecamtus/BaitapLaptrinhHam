#include <iostream>
#include <cmath>
using namespace std;

void NamNhuan(int, int);

int main()
{
	int x, y;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	NamNhuan(x, y);
	return 0;
}

void NamNhuan(int xx, int yy)
{
	int n = xx;
	bool dk1, dk2;
	while (n <= yy)
	{
		dk1 = (n % 4 == 0) && (n % 100 != 0);
		dk2 = n % 400 == 0;
		if (dk1 == true || dk2 == true)
			cout << " " << n;
		n = n + 1;
	}
}
