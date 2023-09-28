#include <iostream>
#include <cmath>
using namespace std;
void LietKeUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
    LietKeUocSo(n);
	return 0;
}
void LietKeUocSo(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << " " << i;
		i++;
	}
}
