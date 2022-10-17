#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main()
{
	float xA,yA,xB,yB,xC,yC, xG,yG,p,M,S1,S2 ;
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
	p  = (AB+AC+BC)/2;
	M  = sqrt(p*(p-AB)*(p-AC)*(p-BC));
	S1 = PI*(M/p)*(M/p);
	S2 = PI*((AB*AC*BC)/(4*M))*((AB*AC*BC)/(4*M));
	cout<<"toa do trong tam cua tam giac ABC la :"<<"("<<xG<<";"<<yG<<")"<<endl;
	cout<<"dien tich duong tron noi tiep tam giac ABC la :"<<S1<<endl;
	cout<<"dien tich duong tron ngoai tiep tam giac ABC la :"<<S2;
	return 0;
}
	
	
	
