#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,min,m1,m2,max,tong;
    cout<<"nhap bon so nguyen: ";
    cin>>a>>b>>c>>d;
    
    max=a>b ? a : b;
    max=max>c ? max : c;
    max=max>d ? max : d;
    
    min=a<b ? a : b;
    min=min<c ? min : c;
    min=min<d ? min : d;
    
    if(max!=a && min!=a)
        m2 = a;
    if(max!=b && min!=b)
        m2 = b;
    if(max!=c && min!=c)
        m2 = c;
    if(max!=d && min!=d)
        m2 = d;
        
    tong=a+b+c+d;
	m1=tong-max-min-m2;
    
    if(m2 > m1)
        cout<<"thu tu bon so nguyen tang dan la "<<min<<"-"<<m1<<"-"<<m2<<"-"<<max<<endl;
    else
         cout<<"thu tu bon so nguyen tang dan la "<<min<<"-"<<m2<<"-"<<m1<<"-"<<max;
         
    return 0;
}
    
