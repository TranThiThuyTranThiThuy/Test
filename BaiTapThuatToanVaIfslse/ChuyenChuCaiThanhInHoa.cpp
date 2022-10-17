#include<iostream>
using namespace std;
int main()
{
	char kytu;
    cout<<"nhap mot chu cai bat ki :";
    cin>>kytu ;
   if (kytu>='a'&& kytu <='z')
   {
	 cout<<kytu<<" " <<"se doi thanh "<<char(kytu-32)<<" "<< "khi ep kieu"; 
   }
   else if (kytu>='A' && kytu <='Z')
    {
    	cout<<char(kytu+32);
	}
    return 0;
}
