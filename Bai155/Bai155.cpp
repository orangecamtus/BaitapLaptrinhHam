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
	int t = 1;
	int i = 0;
	while (i <= nn)
	{
		t = t * 2;
		cout << t << " ";
		i++;
	}
}