#include <iostream>
using namespace std;
int Tim(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << Tim(n);
}
int Tim(int nn)
{
	int t = 1;
	int k = 0;
	while (2 * t <= nn)
	{
		t = t * 2;
		k++;
	}
	return k;
}