#include<iostream>
using namespace std;
int main(){
   int n;
   int count= 0;
   int tong= 0;
   do{
       cout<<"nhap so nguyen duong: ";
       cin>>n;
   }while(n<=0);
   while(n!=0){
       count++;
        tong= tong + n % 10;
       n= n/10 ;
   }
   cout<<"So luong chu so la: "<<count <<endl <<" Tong cac chu so la: "<< tong;
   return 0;
}
