#include <iostream> 
#include<math.h>
using namespace std; 
int main() 
{ 
  int n,i,t;
  float x;
  double s;
  cout<<"nhap vao so nguyen duong n va so thuc x :";
  cin>>n>>x;
  s = 0.0;
  t=0;
  for (i=1;i<=n;i++)
  {
  	t = t+ i;
  	s = s + (pow(x,i)/t);
  }
  cout<<"tong la :"<<s;
  return 0;
}
