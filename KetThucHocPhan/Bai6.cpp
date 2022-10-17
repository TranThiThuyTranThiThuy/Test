#include<iostream>
using namespace std;
void TheTich(int a, int b, int h)
{
	int V=0;
	V = a*b*h;
	cout<<"The tich hinh hop chu nhat la :"<<V;
}
int main ()
{
	int a,b,h;
	cout<<"Nhap chieu dai, chieu rong, chieu cao cua hinh chu nhat :";
	cin>>a>>b>>h;
	if (a>0&&b>0&&h>0)
	TheTich(a,b,h);
	else
	cout<<"canh nhap khong thoa man";
	return 0;
}
