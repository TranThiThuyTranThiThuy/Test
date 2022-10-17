#include<iostream>
using namespace std;
int main()
{
    int n,sc=0,dem=0,i;
    int s=0;
    cout<<"Nhap so n ";
    cin >>n;
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            cout  <<i <<" ";
            s=s+i;
            dem++;
            if (i%2==0)
              sc=sc+i;
        }
            
    }
    cout<<"tong cac uoc "<<s<<endl;
    cout <<"Tong so uoc "<<dem<<endl;
    cout <<"Tong cac uoc chan "<<sc;
    return 0;
}
