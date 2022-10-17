#include <iostream>
#include<math.h>
using namespace std;
bool KT_soM(int k)
{
    for(int n=0 ; n<=k ; n++)
    {
        if(k == pow(2,n)-1)
            return true;
    }
    return false;
}
int main()
{
    int k;
    do{
        cout<<"nhap so k (k>=0): ";
        cin>>k;
    }while(k<0);
    if(KT_soM(k) == true)
        cout<<k<<" la so Mersenne";
    else
        cout<<k<<" KHONG la so Mersenne";
    return 0;
}
