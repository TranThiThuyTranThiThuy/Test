#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int N,S,i,x;
	cout<<"nhap so nguyen duong N va nhap x :";
	cin>>N>>x;
	S = 1;
	for (i=1;i<=N;i++)
	{
		S = S + pow(x,i);
    }
		cout<<"tong do la :"<<S;	
	return 0;
}
