#include<iostream>
#include<math.h>
using namespace std; 
typedef struct SOPHUC 
{ 
   float x; 
   float y; 
};
void Nhap(SOPHUC &z)
{ 
   cout<<"nhap phan thuc :"; 
   cin>>z.x; 
   cout<<"nhap phan ao :"; 
   cin>>z.y; 
} 
void insp(SOPHUC &z) 
{ 
 cout<<"z = "<<z.x <<"+"<<z.y<<"*i"<<endl; 
}
SOPHUC congsp(SOPHUC z1, SOPHUC z2) 
{ 
   SOPHUC kq; 
   kq.x = z1.x+z2.x;
   kq.y = z1.y+z2.y;
   return kq; 
}
SOPHUC trusp(SOPHUC z1, SOPHUC z2) 
{ 
   SOPHUC kqh; 
   kqh.x = z1.x-z2.x;
   kqh.y = z1.y-z2.y;
   return kqh; 
}
float MODUL(SOPHUC z)
{
	return sqrt(z.x*z.x+z.y*z.y);
}
int main ()
{
	SOPHUC z1,z2,kq,kqh;
	cout<<"So phuc thu nhat z1 "<<endl;
	Nhap(z1);
	insp(z1);
	cout<<"So phuc thu hai z2 "<<endl;
	Nhap(z2);
	insp(z2);
	kq=congsp(z1,z2);
	cout<<"tong hai so phuc do la : ";
	insp(kq);
	kqh=trusp(z1,z2);
	cout<<"hieu hai so phuc la : ";
	insp(kqh);
	cout<<"Do lon cua so phuc thu nhat la : "<<MODUL(z1)<<endl;
	cout<<"Do lon cua so phuc thu hai la : "<<MODUL(z2);
	return 0;	
}
