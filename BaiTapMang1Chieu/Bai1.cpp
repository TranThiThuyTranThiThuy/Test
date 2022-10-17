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
void KiemTra(int a[],int n)        // Cau a va cau b
{
	int i,s=0, dem =0;
	
	for (i=0;i<n;i++)
	{
		if (a[i]>0)
	    {
			dem++;
	     	s+=a[i];
        }
	}
	cout<<"Cau a)"<<endl;
    cout<<"so lan xuat hien cua cac so nguyen duong la :"<<dem<<endl;
    cout<<"Cau b)"<<endl;
    cout<<"Tong cac so khong am la :"<<s<<endl;
}
int KTsnt(int n)                 // cau c 
{
	int i , dem=0;
	if (n<2)
	return 0;
	for (i=1;i<=n;i++)
	if (n%i==0)
	   dem++;
	if (dem==2)
	return 1;
	return 0;
}
void demSNT(int a[],int n)
{
	int i, s=0, dem=0;
	for (i=0;i<n;i++)
	{
	    if (KTsnt(a[i])==1)
	    {
	    	dem++;
	    	s+=a[i];
		}
	}
    cout<<"Cau c)"<<endl;
    cout<<"so phan tu la SNT la :"<<dem<<endl;
    cout<<"tong cac phan tu do la :"<<s<<endl;
}
int KTSo(int n)
{
	int i = (int)sqrt(n);
	if ((i * i) == n)
		return 1;
	return 0;
}
void demSCP(int a[],int n)             // cau d
{
	int i,s=0,dem=0;
	
	for (i=0;i<n;i++)
	{
		if (KTSo(a[i])==1)
		 {
		   dem++;
		  s+=a[i];
       	}
	}
	cout<<"Cau d)"<<endl;
	cout<<"so phan tu la SCP la :"<<dem<<endl;
	cout<<"tong cac phan tu do la :"<<s<<endl;	
}
void minmax(int a[], int n)             // cau e
{
	int i;
	int max=a[0];
	int min=a[0];
	for (i=0;i<n;i++)
	{	
		if (a[i]>max)
		    max=a[i];
		if (a[i]<min)
		    min=a[i];
   }
    cout<<"Cau e)"<<endl;
    if (max==min)
    {
    	cout<<"GTLN = GTNN = "<<max<<endl;
	}
	else
	{
	cout<<"GTLN LA :"<<max<<endl;
	cout<<"GTNN LA :"<<min<<endl;
    } 
}
void maxminSNT(int a[], int n)       // f) T?m SNT max,min n?u có
{
    int i,x,max=INT_MIN,min=INT_MAX,dem=0;
    for (i=0;i<n;i=i+1)
        if(KTsnt(a[i])==1)
        {
            x=a[i];
            dem=dem+1;
            if (a[i]>max)
                max=a[i];
            if (a[i]<min)
                min=a[i];
        }
    if (dem==0)
        cout<<"f)  Khong ton tai so nguyen to trong mang"<<endl;
    else if (dem==1)
        cout<<"f)  So nguyên to lon nhat va nho nhat la:  "<<x<<endl;
    else 
    {
        cout<<"f)  So nguyen to lon nhat la: "<<max<<endl;
        cout<<"f)  So nguyen to nho nhat la: "<<min<<endl;
    }
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	KiemTra(a,n);
    demSNT(a,n);
    demSCP(a,n);
    minmax(a,n);
    maxminSNT(a,n);
	return 0;
}

