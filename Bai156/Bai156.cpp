#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void DayGiaTri(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	DayGiaTri(n);
	return 0;
}

void DayGiaTri(int nn)
{
	int t, i;
	t = 1;
	i = 1;
	while (i <= nn)
	{
		t = t * i;
		cout << setw(4) << t;
		i = i + 1;
	}
}