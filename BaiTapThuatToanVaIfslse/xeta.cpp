#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"nhap a :";
	cin>>a;
	if (a%2==0)
	{
		cout<<"a la so chan"<<endl;
	}
	else 
	{ 
	cout<<"a la so le"<<endl;;
	}
	if (a<0)
	{
		cout<<"a la so am"<<endl;
	}
	else if (a>0)
	{
		cout<<"a la so duong";
	}
	else 
	{
		cout<<"a bang khong";
	}
	return 0;
}
