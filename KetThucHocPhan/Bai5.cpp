#include<iostream>
#include<math.h>
using namespace std;
void HeNP(int &N)
{
	int m=0,bin;
	while(N>0)
	{
    	bin +=(N%2)*pow(10,m);
    	m++;
    	N=N/2;
    }
   cout<<"he nhi phan la :"<<bin;
}
int main ()  
{
	int N;
	do
	{
		cout<<"Nhap so tu nhien N :";
		cin>>N;
	}
	while(N<0);
	HeNP(N);
	return 0;
}
