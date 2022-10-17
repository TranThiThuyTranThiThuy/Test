#include<iostream>
#include<math.h>
using namespace std;
void UCLL_BSCNN(int &a, int &b);
void RutGon(int c, int d);
void TinhTong(int x, int y, int z, int r);
int main()
{
	int a, b, c, d, x, y, z, r;
	cout << "a) nhap 2 so nguyen duong ";
	cin >> a >> b;
	int tich = a * b;
	UCLL_BSCNN(a, b);
	cout << "USCLL: " << a << endl << "BSCNN: " << tich / a << endl;
	cout << "b) \n nhap tu so: ";
	cin >> c;
	cout << " nhap mau so: ";
	cin >> d;
	RutGon(c, d);
	cout << "c) \n nhap tu so: "; cin >> x;
	cout << " nhap mau so: "; cin >> y;
	cout << " nhap tu so: "; cin >> z;
	cout << " nhap mau so: "; cin >> r;
	TinhTong(x, y, z, r);
}
void UCLL_BSCNN(int &a, int &b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		if (b > a)
			b = b - a;
	}
}
void RutGon(int c, int d)
{
	int m = c, n = d;
	UCLL_BSCNN(m, n);
	int mauso = d / m;
	if (mauso == 1)
		cout << " phan so toi gian: " << c / m << endl;
	else
		cout << " phan so toi gian: " << c / m << "/" << mauso << endl;
}
void TinhTong(int x, int y, int z, int r)
{
	int tuso = (x * r) + (y * z);
	int mauso = y * r;
	RutGon(tuso, mauso);
}

