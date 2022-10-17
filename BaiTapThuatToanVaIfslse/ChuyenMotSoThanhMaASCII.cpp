#include<iostream>
using namespace std;
int main()
{
	char kytu;
	int number;
	cout << "Nhap 1 ky tu : ";
	cin >> kytu;
	cout << "Ky tu co ma ASCII la: " << int(kytu) << endl;
	cout << "Nhap vao 1 so nguyen tu 1-255: ";
	cin >> number;
	cout << "So nguyen co ma ASCII la : " << char(number) << endl;
	return 0;
}
