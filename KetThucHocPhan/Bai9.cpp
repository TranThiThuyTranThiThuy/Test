#include <iostream>
using namespace std;
void NhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu n:";
	cin>>n; 
	for (int i = 0; i < n; i++)
	{
		cout<<"Phan tu thu "<<i<<" : ";
		cin>>a[i]; 
	}
}
void KiemTraMin(int a[],int n)        
{
	int i, min = a[0];
	
	for (i=0;i<n;i++)
	{
		if (a[i]<min)
	    {
	     	min=a[i];
        }
	}
	cout<<"Gia tri nho nhat cua mang la :"<<min;
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	KiemTraMin(a,n);
	return 0;
}
