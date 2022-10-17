#include<iostream>
#define MAXC 100
using namespace std;
void NhapMangHaiChieu(int a[][MAXC], int &m, int &n)
{ 
    cout<<"Nhap so dong va so cot cua ma tran :";
    cin>>m>>n;
    int i, j;
    for (i=0; i<m; i++)
    for (j=0; j<n; j++)
    { 
       cout<<"Nhap phan tu dong "<<i<<" cot "<<j<<" : ";
       cin>>a[i][j];
    } 
}
void Mintrendong(int a[][MAXC],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
	  int min=a[i][0];
	  for(j=0;j<n;j++)
      if(a[i][j]<min)
    	min = a[i][j];
    	cout<<"gia tri nho nhat tren dong "<<i<<" = "<<min<<endl;
    }
}
void Maxtrencot(int a[][MAXC],int m,int n)
{
	int i,j;
	for(j=0;j<n;j++)
	{
	  int max=a[0][j];
	  for(i=0;i<n;i++)
	  if(max<a[i][j])
		max = a[i][j];
		cout<<"gia tri lon nhat tren cot "<<j<<" = "<<max<<endl;
	}
}
int main ()
{
	int a[100][MAXC],m,n;
	NhapMangHaiChieu(a,m,n);
	Mintrendong(a,m,n);
	Maxtrencot(a,m,n);
	return 0;
}
