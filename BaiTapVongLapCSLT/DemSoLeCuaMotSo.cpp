#include <iostream>
using namespace std;
int main()
{
    int n, m=0, dem1=0, dem2=0 ;
    cout<<"nhap so nguyen duong n: ";cin>>n;
    while(n!=0)
    {   
        m= n%10;
        if(m%2==0)
            dem2++;
        else
            dem1++;
        n/=10;
    }
    cout<<"so chu so le: "<<dem1<<endl;
    cout<<"so chu so chan: "<<dem2;
    return 0;
}
