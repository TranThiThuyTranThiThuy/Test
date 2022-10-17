#include<iostream>
#include<math.h> 
using namespace std;
int DecBin(int n)
{
	int so = 0;
	int i, a;
	for ( i = 0; n - pow(2, i) >= 0; i++);
	i -= 1;
	for(int j=0;j<=i;j++)
	{
		a = n % 2;
		n /= 2;
		so += a * pow(10, j);
	}
	return so;
}
int main()
{
	int n;
	cin >> n;
	cout << DecBin(n);
	return 0;
}
