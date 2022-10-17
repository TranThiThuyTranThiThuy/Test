#include<iostream>
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
void demSCP(int a[],int &n)             // cau d
{
	int i,dem=0,s=0;
	for (i=0;i<n;i++)
	{
		i= (int) sqrt(a[i]);
		if (i*i==a[i])
		{
		  dem++;
		  s+=a[i];
		}
    }
	cout<<"Cau d)"<<endl;
	cout<<"so phan tu la SCP la :"<<dem<<endl;
	cout<<"tong cac phan tu do la :"<<s<<endl;	
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	demSCP(a,n);
	return 0;
}

