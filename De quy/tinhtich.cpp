#include<iostream>
using namespace std;
int CapSoCong(int n, int a, int r)
{

    if (n == 1)
    return a;
    else return (r + CapSoCong(n - 1, a,r));
}
int CapSoNhan(int n, int a, int q)
{
    if (n == 1)
    return a;
    else return(q * CapSoNhan(n - 1, a, q));
}
int main ()
{
	int a,n,r;
	cout<<"nhap a ,n , r ";
	cin>>a>>n>>r;
	cout<<CapSoCong(n,a,r)<<endl;
	cout<<CapSoNhan(n,a,r);
	return 0;
}
