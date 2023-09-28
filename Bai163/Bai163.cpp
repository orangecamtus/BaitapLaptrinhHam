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
	int t = nn;
	while (t % 2 == 0)
		t = t / 2;
	return t;
}