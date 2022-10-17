#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,p,Cv,s,h;
    cout<<"nhap do dai 3 canh cua tam giac :";
	cin>>a>>b>>c;
	Cv = a+b+c;
	p = Cv/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	h = s/(2*a);
	cout <<"chu vi tam giac la :"<<Cv<<endl;
	cout <<"dien tich tam giac la :"<<s<<endl;
	cout <<"chieu cao tam giac la :"<<h<<endl;
	return 0;
}
