#include <iostream>
using namespace std;
void Xuat(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Xuat(n);
}
void Xuat(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s += (float)1 / i;
		cout << s << " ";
		i++;
	}
}