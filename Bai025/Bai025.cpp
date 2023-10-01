#include <iostream>
using namespace std;
void HoanVi(int&, int&);
int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << "\nTruoc hoan vi: ";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	HoanVi(a, b);
	cout << "\nSau hoan vi: ";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	return 0;
}
void HoanVi(int& aa, int& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;
}