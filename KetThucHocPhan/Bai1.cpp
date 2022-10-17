#include<iostream>
using namespace std;
int KTsnt(int N)                 
{
	int i , dem=0;
	if (N<2)
	return 0;
	for (i=1;i<=N;i++)
	if (N%i==0)
	   dem++;
	if (dem==2)
	return 1;
	return 0;
}
int DemSNT(int N)
{   
    int dem = 0;
    for (int i=0;i<=N;i++)
    {
		if (KTsnt(i)==1)
		dem++;
	}
	return dem;
}
int main ()
{
	int N,dem=0;
	do
	{
		cout <<"Nhap so nguyen duong N : ";
		cin>>N;
	}
	while (N<=0);
	dem = DemSNT(N);
	cout <<"Co "<<dem<<" so nguyen to";
	return 0;
}
