#include <iostream>
using namespace std;
void NhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu n:";
	cin>>n; 
	for (int i = 0; i < n; i++)
	{   
	do{
		cout<<"Phan tu nguyen duong thu "<<i<<" : ";
		cin>>a[i]; 
	  }
	while(a[i]<=0);
	}
}
int Demchuso(int n)
{
   int tem,count= 0;
   tem = n;
   while(tem!=0)
   {
       count++;
       tem= tem/10 ;
   }
   return count;
}
void DemSL(int a[], int n)
{
	for (int i = 0; i<n;i++)
	{
		int count = Demchuso(a[i]);
		cout<<"so luong chu so cua phan tu thu "<<i<<" la :"<<count<<endl;
    }
}
int main()
{
	int a[100];
	int n;
	NhapMang(a,n);
	DemSL(a,n);
	return 0;
}
