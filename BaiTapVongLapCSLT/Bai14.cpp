#include<iostream>
using namespace std;
int main ()
{
	int i,a,b,c ;
	for(i=100;i<=999;i++)
	{
		a= i/100;
		b= (i%100)/10;
		c= i%10;
		if (a+b+c == a*b*c)
		cout <<a<<"+"<<b<<"+"<<c<<" = "<<a<<"*"<<b<<"*"<<c<<endl;
	}
	return 0;
}
