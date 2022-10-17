#include<iostream>
using namespace std;
int TinhUCLN(int a, int b)
{
    while (a!=b)   // tim UCLN : neu a=b thi UCLN la a hoac b
	if(a>b)
    {
	  	a= a-b;
    }
	else
	{
		b = b-a;
    } 
	return a;     // return b;
}
int TinhBCNN(int a, int b)
{
	int BCNN = a*b;
	BCNN = BCNN/TinhUCLN(a,b);
	return BCNN;
}
int main()
{
	int a,b;
	cout<<"Nhap 2 so nguyen duong a va b :";
	cin>>a>>b;
	cout<<"UCLN la :"<<TinhUCLN(a,b)<<endl;
	cout<<"BCNN la :"<<TinhBCNN(a,b)<<endl;
	return 0;
}
