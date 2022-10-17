#include<iostream>
using namespace std;
int Tong(int n,int a,int r) 
{
	if(n==1)
	return a;
	return (Tong(n-1,a,r) + r);
}
int main()
{
	int a,n;
	cout<<"nhap phan tu thu n :";
	cin>>n;
	cout <<"nhap so hang dau tien :";
	cin>>a;
	int r;
	cout<<"nhap cong boi :";
	cin>>r;
	if(n<=0)
	cout<<"so luong phan tu ko dung";
	cout<<"tong cap so cong la : "<<Tong(n,a,r);
	return 0;
}
