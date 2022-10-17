#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"nhap 3 canh cua tam giac :";
  cin>>a>>b>>c;
  if ((a+b>c) && (a+c>b) && (b+c>a))
 {
 	cout<<"a,b,c la ba canh cua tam giac thuong";
    if ((a==b) && (b==c))
    {
    	cout<< "a,b,c la 3 canh cua tam giac deu";
   	}
   else 
       if ((a==b) || (a==c) || (b==c))
     {
		  cout<<"a,b,c la 3 canh cua tam giac can";
	 }
   else
       if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
      {
		cout<<"a,b,c la 3 canh cua tam giac vuong" ;
      }
 }
 else 
   {
   cout<<"a,b,c khong phai la 3 canh cua tam giac";
   }
 return 0;
}
