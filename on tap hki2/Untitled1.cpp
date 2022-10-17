#include<iostream> 
#include<math.h>
#define Max 100
using namespace std;
 struct Toado
{
	int td,hd;
};
void nhaptoado(Toado a[] , int & n)
{
	cout<<"So diem can kiem tra :";
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cout<<"Nhap toa do diem a["<<i<<"] : " ;
		cin>>a[i].hd>>a[i].td;
	}
}
int kiemtra(Toado a)
{
	int dem =0;
	if(a.hd>0&&a.td>0)
	{
	   dem++;
    }
	return dem;
}
void in(Toado a[],int &n)
{
    int i,d=0 ;
	for (i=0;i<n;i++){
   	d = kiemtra(a[i]);}
    if(d>0)
	cout<<"so luong diem nam tren phan tu thu I la :"<<d;
	if(d=0)
	cout<<"khong co diem nao nam o goc phan tu thu I";
}
int main ()
{
	Toado a[Max];
	int n;
	nhaptoado(a,n);
	in(a,n);
	return 0;
}
