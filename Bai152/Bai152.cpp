#include <iostream>
#include <cmath>
using namespace std;

void Ktra(float);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	Ktra(n);
	return 0;
}
void Ktra(float nn)
{
	int flag, t, du;
	flag = 1;
	t = nn;
	while (t > 1)
	{
		du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "La dang";
	else
		cout << "khong la dang";
}