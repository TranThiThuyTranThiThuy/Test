#include <iostream>
using namespace std;
void KT_SHC(int n)
{
    int sum = 0, i=1;
    while(i<n)
    {
        if(n%i==0)
        {
            sum += i;
        }
        i++;
    }
    if(sum==n)
        cout<<n<<" la so hoan chinh";
    else
        cout<<n<<" KHONG la so hoan chinh";
}
int main()
{
    int n;
    cout << "nhap so nguyen n: ";cin>>n;
    KT_SHC(n);
    return 0;
}
