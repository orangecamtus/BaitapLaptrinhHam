#include <iostream>
#include <cmath>
using namespace std;

int Dem(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "so luong chu so dau tien la: " << Dem(n);
	return 0;

}

int Dem(int nn)
{
	int dt, dem, t, dv;
	dt = nn;
	while (dt >= 10)
		dt = dt / 10;
	dem = 0;
	t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}
	return dem;
}