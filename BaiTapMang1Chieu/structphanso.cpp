#include<iostream>
#include<math.h>

using namespace std;
struct phanso
{
	float tu;
	float mau;
};
void nhap(phanso& ps)
{
	cout << "Nhap tu so: ";
	cin >> ps.tu;
	cout << "Nhap mau so: ";
	cin >> ps.mau;
}
void xuat(phanso ps)
{
	cout <<  ps.tu << "/" << ps.mau << endl;
}
int USCLN(int a, int b)
{
	int x= a % b;
	while (x != 0)
	{
		a = b;
		b = x;
		x = a % b;
	}
	return b;
}
void toigianps(phanso& ps)
{
	int uocchung = USCLN(ps.tu, ps.mau);
	ps.tu = ps.tu / uocchung;
	ps.mau = ps.mau / uocchung;
}
phanso congps(phanso ps1, phanso ps2)
{
	phanso kq ;
	kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}
phanso nhanps(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.tu;
	kq.mau = ps2.mau * ps2.mau;
	return kq;
}
phanso hieups(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}
phanso thuong(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.mau;
	kq.mau = ps2.mau * ps2.tu;
	return kq;
}
void quydong(phanso& ps1, phanso& ps2)
{
	phanso t;
	t.tu = ps1.tu;
	t.mau = ps1.mau;

	ps1.tu *= ps2.mau;
	ps1.mau *= ps2.mau;

	ps2.tu *= t.mau;
	ps2.mau *= t.mau;

}
void ktraphso(phanso ps)
{
	if (ps.tu > 0 && ps.mau > 0)
	{ 
		cout << " phso duong " << endl;
	}
	else
		cout << " phso am " << endl;
}
void sosanh(phanso ps1, phanso ps2)
{
	float kq1 = ps1.tu /  ps1.mau;
	float kq2 = ps2.tu / ps2. mau;
	if (kq1 > kq2)
	{
		cout << ps1.tu << "/" << ps1.mau << " > " << ps2.tu << "/" << ps2.mau;
	}
	else
	{
		cout << ps1.tu << "/" << ps1.mau << " < " << ps2.tu << "/" << ps2.mau;
	}
}
int main()
{
	phanso ps1, ps2, tongps,tichps,hieu,chiaps;
	nhap(ps1);
	toigianps(ps1);
	xuat(ps1);
	ktraphso(ps1);
	nhap(ps2);
	toigianps(ps2);
	xuat(ps2);
	ktraphso(ps2);
	tongps = congps(ps1, ps2);
	toigianps(tongps);
	cout << "tong 2 phan so la : ";
	xuat (tongps);
	tichps = nhanps(ps1, ps2);
	cout << "tich 2 phan so la : ";
	xuat(tichps);
	hieu = hieups(ps1, ps2);
	cout << "hieu 2 phan so la : ";
	xuat(hieu);
	chiaps = thuong(ps1, ps2);
	cout << "thuong 2 phan so la : ";
	xuat(chiaps);
	sosanh(ps1, ps2);
	quydong(ps1, ps2);
	cout << endl;
	cout << " quy dong phso ";
	cout << endl;
	xuat(ps1);
	xuat(ps2);
	return 0;
}


