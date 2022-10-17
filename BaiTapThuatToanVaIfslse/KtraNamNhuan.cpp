#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"nhap mot nam bat ki :";
	cin>>a;
	cout<<endl;
	if ((a%400==0)||((a%4==0)&&(a%100!=0)))
     {
	
	 cout<<" day la nam nhuan  :";
	} 
	else
	 {
	 cout<<"khong phai la nam nhuan ";
    }
	 return 0; 
    
}
