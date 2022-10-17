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
		cout<<"Nhap a["<<i<<"] = ";
		cin>>a[i]; 
	}
}
void KTpttn(int a[], int n)
{
	int i,j;
    int	t = 0;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
		  if (a[i]==a[j])
		  {
		  	t++;
	      }
		}
	}
	cout<<"cau a)"<<endl<<"mang co "<<t<<" phan tu trung nhau"<<endl;
}
void Dem(int a[], int n)
{
	int i,j,dem=0;
	cout<<"cau b)"<<endl;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
		  if (a[i]==a[j])
		  {
		  dem++;  
          }
     cout <<"phan tu a["<<i<<"] xuat hien "<<dem<<" lan"<<endl;
    }
}
int main()
{

	int a[100];
	int n;
	NhapMang(a,n);
	KTpttn(a,n);
	Dem(a,n);
	return 0;
}
