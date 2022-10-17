#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int N,S,i;
	cout<<"nhap so nguyen duong N :";
	cin>>N;
	S = 0;
	for (i=1;i<=N;i++)
	{
		S = S + pow(i,2)*i;
    }
		cout<<"tong do la :"<<S;	
	return 0;
}
