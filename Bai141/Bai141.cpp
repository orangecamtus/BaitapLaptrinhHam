#include <iostream>
using namespace std;
int SoDau(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so dau: ";
	cout << SoDau(n);
	return 0;
}
int SoDau(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}