#include<iostream> 
using namespace std; 
int mytery(int, int); 
int sum(int); 
int main() 
{ 
int x,y; 
cout <<" Vao 2 so nguyen: "; 
cin >>x>>y; 
cout << "Ket qua la "<< mytery(x, y); 
} 
int mytery(int a, int b) 
{ 
if (b==1) 
return a; 
else 
return a + mytery(a,b-1); 
}
//  chuc nang cua chuong trinh nay la : tinh tich cua hai so nguyen x va y .Chuyen sang dang he thuc truy hoi tich x*y bang tong cua y so hang x theo cong thuc tong quat  S(x,y)=S(x,y-1)+x  
// theo ham tren ta thay S(a,b)=S(a,b-1)+a
// Vay thay vi tinh S(a,b) ta tinh S(a,b-1) tro di 
// tuong tu tinh : S(a,b-2),........S(a,2),S(a,1)=a 
// ta co  S(x,y) = S(x,y-1)+x
// Tinh   S(x,y-1)= S(x,y-2)+x
//        S(x,y-2)= S(x,y-3)+x
//        ....................
//        S(x,2) = S(x,1)+x 
//        S(x,1)  = x  

