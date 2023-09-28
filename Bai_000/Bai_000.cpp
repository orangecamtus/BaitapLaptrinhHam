#include <iostream>
#include <string>
using namespace std;

string HoTen;
int Toan;
int Van;
float DiemTrungBinh;
int main()

{
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap Toan: ";
	cin >> Toan;
	cout << "Nhap Van: ";
	cin >> Van;
	DiemTrungBinh = (float)(Toan + Van) / 2;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Toan: " << Toan << endl;
	cout << "Van: " << Van << endl;
	cout << "Diem trung binh: " << DiemTrungBinh << endl;
	return 0;
}