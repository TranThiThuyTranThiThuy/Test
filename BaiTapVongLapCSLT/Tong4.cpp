#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int N,i;
	float S;
	cout<<"nhap so nguyen duong N :";
	cin>>N;
	S = 0;
	for (i=1;i<=N;i++)
	{
		S = S + 1.0/(i*(i+1));
    }
		cout<<"tong do la :"<<S;	
	return 0;
}
