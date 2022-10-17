#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int N,S,i;
	cout<<"cau a"<<endl;
	cout<<"nhap so nguyen duong N :";
	cin>>N;
	S = 0;   // cau a
	for (i=2;i<=N;i++)
	{ 
	  S = i*(i+1)*(i+2);
    }
		cout<<"tong do la :"<<S<<endl;
	
	cout<<"cau b"<<endl;
	int n, s, j, t;
	cout<<"nhap n :";
	cin>>n;
	s = 0;   // cau b
	for (j=2;j<=n;j+=2)	
	{
		t+=j;
		s+= t;
	}
		cout<<"tong do la :"<<s;	
	return 0;
}
