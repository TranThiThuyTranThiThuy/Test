#include<iostream>
using namespace std;
void SoDN( int N)
{

    int	S=0,tam=0;
	for (;N!=0;N=N/10)
	{
		tam = N%10;
		S = S*10+tam;
	}
	   cout <<S;
}
int main ()  
{
	int N;
	do
	{
		cout<<"Nhap so nguyen duong N :";
		cin>>N;
	}
	while(N<=0);
	SoDN(N);
	return 0;
}
    
    
