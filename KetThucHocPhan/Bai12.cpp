#include <iostream>
#include<math.h>
using namespace std;
void NhapMang(int a[], int &n);
void NhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu n:";
	cin>>n; 

	for (int i = 0; i < n; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : " ;
		cin>>a[i]; 
	}
}
void Ktra(int a[], int n) 
{
	int x ,dem =0;
	cout<<"Nhap x = ";
	cin>>x;
	for (int i=0;i<n;i++)
	{
		if(x==a[i])
		{
		   dem++;
    	}
	}
	cout<<"So "<<x<<" xuat hien "<<dem<<" lan trong mang";
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	Ktra(a,n);
	return 0;
}
