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
void XuatMangHaiChieu(int a[][MAXC], int m, int p)
{ 
    int i, j;
    for (i=0; i<m; i++)
    { 
      for (j=0; j<p; j++)
      cout<<a[i][j]<<" ";
        cout<<endl;
    } 
}
void Tich(int a[][MAXC],int b[][MAXC],int c[][MAXC],int m,int n,int p)
{
int i, j, k ;
    for (i = 0; i <m; i++)
    for (j = 0; j < p; j++)
    {
        c[i][j] = 0;
        for(k = 0;k<n;k++)
        c[i][j] = c[i][j] + a[i][k]*b[k][j];           
    }
        cout <<"Tich hai ma tran vua nhap la :"<<endl;
}
int main() 
{
   int  q,p,m,n,a[100][MAXC], b[100][MAXC], c[100][MAXC];
   cout<<"Nhap so dong va so cot cua ma tran a :";
   cin>>m>>n;
   cout<<"Nhap ma tran a :"<<endl;
   NhapMangHaiChieu(a,m,n);
   do
   {   
   cout<<"Nhap so dong cua ma tran b :";
   cin>>q;
   }
   while(q!=n);
   cout<<"nhap so cot cua ma tran b :";
   cin>>p;
   cout<<"Nhap ma tran b :"<<endl;
   NhapMangHaiChieu(b,m,n);
   Tich(a,b,c,m,n,p);
   XuatMangHaiChieu(c,m,n);
   return 0;
}
