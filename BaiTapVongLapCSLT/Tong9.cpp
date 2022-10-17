#include <iostream> 
#include<math.h>
using namespace std; 
int main() 
{ 
  int n,i,gt;
  float x,s;
  cout<<"nhap vao so nguyen duong n va so thuc x :";
  cin>>n>>x;
  s = 0.0;
  gt=1;
  for (i=1;i<=n;i++)
  {
  	gt = gt*i;
  	s = s + pow(-1,i)*pow(x,i)/gt;
  }
  cout<<"tong la :"<<s;
  return 0;
}
