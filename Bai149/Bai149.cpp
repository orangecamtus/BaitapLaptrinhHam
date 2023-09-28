#include <iostream>
using namespace std;
int ucln(int, int);
int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << "Ket qua: ";
	cout << ucln(a, b);
	return 0;
}
int ucln(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
}