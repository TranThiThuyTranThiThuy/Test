#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n,i;
	cout<<"nhap vao n :";
	cin>>n;
	i = (int) sqrt(n);
		if (i*i==n)
		{
			cout<<n <<" la so chinh phuong";
		}
		else
		{
			cout<<n<<" khong phai la so chinh phuong";
        }

	return 0;
}
