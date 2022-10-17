#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int a,b,c;
	float x1,x2,x3,x4, D;
	cout<<"nhap a,b,c :";
	cin>>a>>b>>c;
	if (a=0)
	
     {
	   if (b=0)
	  
	    if (c=0) 
	     {
		   cout<<"phuong trinh vo nghiem"<<endl;
	      }
	   else
	   {
	   
	   	x1= -c/b;
		cout<<"phuong trinh co nghiem :"<<x1<<endl;}
    	
    }
  
	else 
	{
	      D= b*b - 4*a*c;	}
    
{
		if (D=0)
	    {
	      x2= -b/(2*a);
	      cout<<"phuong trinh co nghiem kep :"<<x2<<endl;
    	}
     else if (D<0)
	   {
		  cout<<"phuong trinh vo nghiem"<<endl;
	}
	      else 
	      {
	      	x3= (-b-sqrt(D))/(2*a);
	      	x4= (-b+sqrt(D))/(2*a);
	      	cout<<"phuong trinh co nghiem kep :"<<x3<<","<<x4;
	       }
}
	       return 0;	       
}
