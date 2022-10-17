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
void SapXepTang(int a[], int n)
{ 
    int i, j;
    for (i = 0; i<n–1 ; i++)  
      { 
         for (j = i + 1; j < n; j++)
          { 
            if (a[i] > a[j])
            HoanVi(a[i], a[j]);
          } 
      } 
} 
void HoanVi(int &x, int &y) 
{ 
int tam = x; x = y; y = tam; 
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	SapXepTang(a,n);
	cout<<" Mang sap xep theo thu tu tang dan la :";
	XuatMang(a,n);
	return 0;
}
