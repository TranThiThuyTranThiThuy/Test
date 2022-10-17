#include<iostream>
#include<>stdlib.h>
using namespace std;
void PrintArray(int *a, int& n)
{
	a = new int[n];
	 for (int i = 0 ; i < n ;i++)
		cin >> a[i];
}
void xuatmang (int *a , int n)
{
	for (int i = 0; i<n; i++)
    cout << a[i];
	cout<<" ";
}
int max2So (int x, int y)
{
return x>y?x:y;
}
int timMAX_Dequy(int a[],int n)
{
if (n == 1)
return a[0];
else
return max2So(timMAX_Dequy(a,n-1),a[n-1]);
}
int main ()
{
	int n,a;
	cin >> n;
	PrintArray(&a,n);
	xuatmang(&a,n);
	cout<< timMAX_Dequy(&a,n);
	delete [] a;
	return 0;
}
