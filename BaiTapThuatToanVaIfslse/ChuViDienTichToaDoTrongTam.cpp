#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main()
{
	float xA,yA,xB,yB,xC,yC, xG,yG,p,C,S ;
	float AB,AC,BC;
	cout<<"nhap hoanh do va tung do cua diem A :";
	cin>>xA>>yA;
	cout<<"nhap hoanh do va tung do cua diem B :";
	cin>>xB>>yB;
	cout<<"nhap hoanh do va tung do cua diem C :";
	cin>>xC>>yC;
	AB = sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
	AC = sqrt((xC-xA)*(xC-xA)+(yC-yA)*(yC-yA));
	BC = sqrt((xC-xB)*(xC-xB)+(yC-yB)*(yC-yB));
	xG = (xA+xB+xC)/3;
	yG = (yA+yB+yC)/3;
	C  = AB+AC+BC;
	p  = (AB+AC+BC)/2;
	S  = sqrt(p*(p-AC)*(p-AB)*(p-BC));
	cout<<"chu vi tam giac la :"<<C<<endl;
	cout<<"dien tich tam giac la :"<<S<<endl;
	cout<<"toa do trong tam cua tam giac la :"<<"("<<xG<<","<<yG<<")"<<endl;
	return 0;
	}
	
