#include<iostream>
#include<math.h>
#define Pi 3.14159
using namespace std;
int main()

{   
    int r ;
	float  s, v ;
	cout<<"nhap ban kinh hinh cau :" ;
	cin>>r;
	s = 4*Pi*r*r;
	v = (4.0/3)*Pi*r*r*r;
	cout << "dien tich mat cau la :"<<s<<endl;
	cout << "the tich hinh cau la :"<<v;
	return 0;
	
	
}
