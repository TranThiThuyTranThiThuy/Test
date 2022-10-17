#include<iostream>
using namespace std;
int KTsnt(int n)                 
{
	int i , dem=0;
	if (n<2)
	return 0;
	for (i=1;i<=n;i++)
	if (n%i==0)
	   dem++;
	if (dem==2)
	return 1;
	return 0;
}
int Ktra(int n)
{
	int  x,y,z;
	if (x*x+y*y==z&&x<y&&y<z&&z<=n)
	{
    for (z=n;z>1;z--)
    {
    	cout<<z<<" ";
    	
	for (y=z-1;y>1;y++)
		cout<<y<<" " ;
    for (x=y-1;x>1;x++) 
	    cout<<x<<" " ;	
	}
}
int main ()
{
	int n;
	do
    {
    	cout<<"Nhap so tu nhien n :";
    	cin>>n;
	}
	while(n<0);
	Ktra(n);
}
