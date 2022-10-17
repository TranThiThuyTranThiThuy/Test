#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"nhap a va b :";
	cin>>a>>b;
	int BCNN = a*b;
    while (a!=b)   // tim UCLN : neu a=b thi UCLN la a hoac b
	if(a>b)
    {
	  	a= a-b;
    }
	else
	{
		b = b-a;
    }
    int T = a;    // tim BCNN
    BCNN = BCNN / T; 
	cout<<"UCLN cua a va b la :"<<a<<endl;
	cout<<"BCNN cua a va b la :"<<BCNN;
	return 0;
}

