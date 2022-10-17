#include <iostream> 
using namespace std; 
void PrintArray(int *p, int n)
{
	for(int i = 0; i < n; i++)
		cout << p[i] << " ";
		cout <<endl;
}
int main ()
{
	int p, n;
	cout <<" nhap so phan tu n : ";
	cin>>n;
    int  * p = new int[n];
	PrintArray(&p,n);
	delete []p;
	return 0;
}
