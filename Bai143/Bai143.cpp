#include <iostream>
using namespace std;
int KT(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KT(n) == 1)
		cout << "Hoan thien";
	else
		cout << "Khong hoan thien";
	return 0;
}
int KT(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s += i;
		i++;
	}
	if (s == nn)
		return 1;
	return 0;
}