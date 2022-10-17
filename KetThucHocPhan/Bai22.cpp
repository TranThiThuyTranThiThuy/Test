
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
void XuatMangHaiChieu(int a[][MAXC], int m, int n)
{ 
    int i, j;
    for (i=0; i<m; i++)
    { 
      for (j=0; j< n; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    } 
}
void Sapxeptheocot(int a[][MAXC], int m, int n)
{
      for(int i = 0; i<m ; i++)
      for(int j = 0; j<n ; j++)
      for(int k =i+1; k<m ; k++)
      if(a[i][j]>a[k][j])
      {
         int tam = a[i][j];
         a[i][j] = a[k][j];
         a[k][j] = tam;
      }
      cout<<"Ket qua sau khi sap xep la :"<<endl;
}
int main ()
{
	int a[100][MAXC],m,n;
	NhapMangHaiChieu(a,m,n);
	Sapxeptheocot(a,m,n);
	XuatMangHaiChieu(a,m,n);
	return 0;
}


