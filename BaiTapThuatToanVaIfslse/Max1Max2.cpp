#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max1,max2;
    cin>>a>>b>>c;
    max1=max2=-1;
    if (a>max1)
    {
        max2=max1;
        max1=a;
    }
    if(b>max1)
    {
        max2=max1;
        max1=b;
    }
    else if (b<max1&&b>max2)
               max2=b;
    if (c>max1)    
    {
        max2=max1;
        max1=c;
    }
    else if (c<max1&&c>max2)
              max2=c;
              
    cout<< max1<<"  "<<max2;
              
    return 0;
}

