#include <iostream> 
#include<math.h>
using namespace std; 
float Tong(int n, float x ) 
{ 
  int i;
  float s,t;
  s = 0.0;
  t=0;
  for (i=1;i<=n;i++)
  {
  	t = t+ 1.0/i;
  	s = s + pow(-1,i-1)*pow(x,i)/t;
  }
  return s;
}
int main() 
{
	int n;
	float x,s=0;
	cout <<"Nhap vao so thuc x :";
	cin>>x;
	do
	{
		cout<<"Nhap vao so nguyen duong n :";
		cin>>n;
	}
	while (n<1);
	s = Tong(n,x);
	cout<<"tong do la :"<<s<<endl;
	return 0;
}
