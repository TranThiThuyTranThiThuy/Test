#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cout<<"N :";
	cin>>n;
	int a=1;
	int b=0;
	for(int i=0;i<n;i++){
			c=a+b;
			a=b;
			b=c;
		cout<<c;
	}
}
