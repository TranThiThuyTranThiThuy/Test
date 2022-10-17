#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"nhap a va b :";
	cin>>a>>b;
    while (a!=b)
	if(a>b)
    {
	  	a= a-b;
    }
	else
	{
		b = b-a;
    }
	cout<<"UCLN cua a va b la :"<<a;
	return 0;
}

