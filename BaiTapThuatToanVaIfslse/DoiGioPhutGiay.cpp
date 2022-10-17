#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int A;
	int gio, phut, giay;
	cout<<"nhap so giay :";
	cin>>A;
    if ((A<0) ||(A>86399))
	    cout << "so giay khong thoa man";
	else
  {
     	gio = A/3600;
    	phut = A%3600/60;
    	giay = A%3600%60;
	    cout << gio <<":"<<phut<<":"<<giay;
  }
    return 0;
}
