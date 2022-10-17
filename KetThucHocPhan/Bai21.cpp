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
void Hoandoicot(int a[][MAXC],int m,int n)
{
    int cot1,cot2;
    cout<<"nhap 2 cot muon hoan doi vi tri :";
    cin>>cot1>>cot2;
    if ((cot1>=0&&cot1<n)&&(cot2>=0&&cot2<n))
    for(int i=0;i<n;i++)
    {
    	int tam = a[i][cot1];
    	a[i][cot1]=a[i][cot2];
    	a[i][cot2]=tam;
	}
    cout<<"Ket qua ma tran sau khi hoan doi : "<<endl;
}
int main ()
{
	int a[100][MAXC],m,n;
	NhapMangHaiChieu(a,m,n);
	Hoandoicot(a,m,n);
	XuatMangHaiChieu(a,m,n);
	return 0;
	
}
