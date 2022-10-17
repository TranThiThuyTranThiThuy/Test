#include<iostream>
using namespace std;
int main()
{
	int N,S,d;
	cout<<"nhap N :";
	cin>>N;
	S=0;
	for (d=N;N!=0;N=N/10)
	{
		S = S*10+N%10;
	}
	if (S==d)
	{
	   cout <<d<<" la so doi xung :"<<endl;
    }
	else
    {	
	   cout<<d<<" khong phai la so doi xung";
    }
    return 0;
}
