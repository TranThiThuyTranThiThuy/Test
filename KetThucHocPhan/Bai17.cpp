#include<iostream>
#define MAXC 100
using namespace std;
void NhapMangHaiChieu(int a[][MAXC], int &m, int &n)
{ 
    int i, j;
    for (i=0; i<m; i++)
    for (j=0; j<n; j++)
    { 
       cout<<"Nhap phan tu dong "<<i<<" cot "<<j<<" : ";
       cin>>a[i][j];
    } 
}
void XuatMangHaiChieu(int a[][MAXC], int m, int n)
{ 
    int i, j;
    for (i=0; i<m; i++)
    { 
      for (j=0; j<n; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    } 
}
void Cong(int a[][MAXC],int b[][MAXC],int c[][MAXC],int m,int n)
{
    int i,j;
    for (i=0;i<m;i++)
      for (j=0;j<n;j++)
	  {
        c[i][j]=a[i][j]+b[i][j];
      }
      cout<<"ket qua khi cong hai ma tran la :"<<endl;
}
int main() 
{
   int  m,n,a[100][MAXC], b[100][MAXC], c[100][MAXC];
   cout<<"Nhap so dong, so cot cua mang:";
   cin>>m>>n;
   cout<<"Nhap ma tran a :"<<endl;
   NhapMangHaiChieu(a,m,n);
   cout<<"Nhap ma tran b :"<<endl;
   NhapMangHaiChieu(b,m,n);
   Cong(a,b,c,m,n);
   XuatMangHaiChieu(c,m,n);
   return 0;
}
   
   
