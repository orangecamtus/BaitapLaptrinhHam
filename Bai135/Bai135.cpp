#include <iostream>
using namespace std;
void KiemTra(int);
int main()
{
	int n;
	cout << "Nhap nam n: ";
	cin >> n;
	KiemTra(n);
}
void KiemTra(int nn)
{
	bool dk1, dk2;
	dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
	dk2 = (nn % 400 == 0);
	if (dk1 == true || dk2 == true)
		cout << "n la nam nhuan";
	else
		cout << "Khong la nam nhuan";
}