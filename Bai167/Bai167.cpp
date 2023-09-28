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
	int s = 0;
	int k = 0;
	while (s + k + 1 < nn)
	{
		k++;
		s += k;
	}
	return k;
}