#include <iostream>
#include<math.h>
using namespace std;
void NhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu n:";
	cin>>n; 

	for (int i = 0; i < n; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<":";
		cin>>a[i]; 
	}
}
int xuatmang(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<a[i]<<endl;
	}
}
void Noimang(int a[],int b[], int T[], int n,int m,int &p)
{
	p= m+n;
	for (int i=0;i<p;i++)
	{
		if (i<n)
		T[i]=a[i];
		else
		T[i]= b[i-n];
	}
}
int  main ()
{
	int a[50];
	int b[50];
	int T[100];
	int m,n,p;
	nhapmang(a,n);
	nhapmang(b,m);
	Noimang(a,b,T,n,m,p);
	xuatmang(T,p);
	return 0;
}
