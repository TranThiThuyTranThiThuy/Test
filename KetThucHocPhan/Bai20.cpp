#include <iostream>
#define MAX 100
using namespace std;
void NhapMangHaiChieu(int a[][MAX], int &m, int &n)
{ 
    do
    {
    cout<<"Nhap so dong va so cot cua mang : ";
    cin>>m>>n;
    }
    while(m!=n);
    int i, j;
    for (i=0; i<m; i++)
    for (j=0; j<n; j++)
    { 
       cout<<"Nhap phan tu dong "<<i<<" cot "<<j<<" : ";
       cin>>a[i][j];
    } 
}
int Tongcheophu(int a[][MAX],int n)
{ 
    int tong =0; 
    for (int i=0;i<n;i++)
    tong = tong + a[i][n-1-i]; 
    return tong; 
}
int main()
{
	int n,m,S,a[100][MAX];
	NhapMangHaiChieu(a,m,n);
	S = Tongcheophu(a,n);
	cout<<"Tong cac phan tu tren duong cheo phu la : "<<S;
	return 0;
}
