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
void TinhTBN(int a[], int n) 
{
	int dem =0,Tich=1;
	float TB;
	for(int i=0;i<n;i++)
	{
		do
		{
		   dem++;
		   Tich = Tich*a[i];
		   TB = pow(Tich,1.0/dem);
		}
		while(a[i]<=0);
	}
	cout<<"Trung binh nhan cac so nguyen duong trong mang la : "<<TB;
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	TinhTBN(a,n);
	return 0;
}
