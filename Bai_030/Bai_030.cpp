#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 2;

	cout << "Tong s = ";
	cout << Tong(s, i, n);
	return 0;
}
float Tong(float ss, int ii, int nn)
{
	while (ii <= 2 * nn)
	{
		ss = ss + (float)1 / ii;
		ii = ii + 2;
	}
	return ss;
}
// Bai_030.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
