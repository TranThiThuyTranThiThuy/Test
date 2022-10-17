#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int N,S,i;
	int gt = 1;
	cout<<"nhap so nguyen duong N :";
	cin>>N;
	S = 0;
	for (i=1;i<=N;i++)
	{
		gt = gt*i;
		S  = S + gt ;
    }
		cout<<"tong do la :"<<S;	
	return 0;
}
