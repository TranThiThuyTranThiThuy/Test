#include<iosteeam>
#define Max 100;
using namespace std;
void Nhapmatran(int a[][Max],int &m,int &n)
{
	do{
	cout<<"nhap sp dong va cot cua ma tran vuong :";
	cin>>m,n;
    }
    while(m!=n)
    for(int i = 0;i<=m;i++)
    for(int j = 0;j<=n;j++)
    {
    	cout<<"nhap phan tu dong "<<i<<" cot "<<j<<endl;
    	cin>>a[i][j];
	}
}
void xuat(int a[][Max],int m, int n)
{
	int i,j;
	for(i=0;i<=m;i++){
	for(j=0;j<=n;j++)
	{
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void matranthua(int b[][Max],int a[][Max],int &m,int &n,int& p,int &q)


int main ()
{
	int a[100][Max],b[]
}
