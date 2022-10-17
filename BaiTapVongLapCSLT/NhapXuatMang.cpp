#include <iostream>
using namespace std;
void NhapMang(int a[], int &n); // prototype
void XuatMang(int a[], int n); // prototype
int main()
{
	int A[100];  // khai báo bi?n m?ng
	int N; // khai báo s? lý?ng ph?n t? trong m?ng
	NhapMang(A,N);
	XuatMang(A,N);
	return 0;
}
void NhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu n:";
	cin>>n; 

	for (int i = 0; i < n; i++)
	{
		cout<<"Nhap phan tu thu "<< i <<" :";
		cin>>a[i]; 
	}
}
void XuatMang(int a[], int n)
{
	cout<<"Cac phan tu cua mang:"; 

	for (int i = 0; i < n; i++)
		cout<<a[i]<<"\t";

	cout<<endl;
}
