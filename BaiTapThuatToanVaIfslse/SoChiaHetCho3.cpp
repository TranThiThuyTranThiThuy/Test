#include <iostream>
using namespace std;
int main()
{
    int i, dem, n = -1;
    while(n<=0)
    {
        cout<<"nhap vao n:";
        cin>>n;
    }
    i = 1, dem = 0;   // i chay tu 1 den n-1,  
    while(i<n)
    {
           if(i%3==0)
           {
             dem++;
             cout<<i << "  ";
           }
           i++;
    }
    cout<<"Co "<<dem<<" so nho hon "<<n<<" va chia het cho 3"<<endl;
    return 0;
}
