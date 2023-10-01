#include <iostream>
#include <cmath>
using namespace std;

void ktra(int, int, int, int, int, int, int, int);

int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;
	cout << "Nhap xC: ";
	cin >> xC;
	cout << "Nhap yC: ";
	cin >> yC;
	cout << "Nhap xM: ";
	cin >> xM;
	cout << "Nhap yM: ";
	cin >> yM;

	ktra(xA, yA, xB, yB, xC, yC, xM, yM);
	return 0;
}

void ktra(int xAA, int yAA, int xBB, int yBB, int xCC, int yCC, int xMM, int yMM)
{
	float sABC = abs(xAA * yBB + xBB * yCC + xCC * yAA - xBB * yAA - xCC * yBB - xAA * yCC) / 2;
	float sMAB = abs(xAA * yBB + xBB * yMM + xMM * yAA - xBB * yAA - xMM * yBB - xAA * yMM) / 2;
	float sMBC = abs(xMM * yBB + xBB * yCC + xCC * yMM - xBB * yMM - xCC * yBB - xMM * yCC) / 2;
	float sMAC = abs(xAA * yMM + xMM * yCC + xCC * yAA - xMM * yAA - xCC * yMM - xAA * yCC) / 2;
	float s = sMAB + sMBC + sMAC;
	if (s = sABC)
		cout << "M nam trong tam giac";
	else
		cout << "M nam ngoai tam giac";
}
