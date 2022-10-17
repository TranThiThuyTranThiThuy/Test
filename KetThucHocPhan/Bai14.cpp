#include <iostream>
#include<math.h>
using namespace std;
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
void XuatMang(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void SapXep(int a[], int n)
{ 
    int i,j,tam;
    for(i=0;i<n-1;i++)
      { 
         for (j=i+1;j<n;j++)
          { 
            if(a[i]>a[j])
            {
            	tam = a[i];
            	a[i]= a[j];
            	a[j]= tam;
			}
          } 
      } 
    cout<<" Mang sap xep theo thu tu tang dan la :";
} 
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	SapXep(a,n);
	XuatMang(a,n);
	return 0;
}
