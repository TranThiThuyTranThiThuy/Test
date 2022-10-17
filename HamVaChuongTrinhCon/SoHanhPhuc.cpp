#include<iostream>
#include<math.h> 
using namespace std;
int main()
{
    int n;
    cout << "nhap so nguyen duong n: ";cin >> n;
    if(kt_shp(n)==true)
        cout<<n<<" la so hanh phuc";
    else
        cout<<n<<" KHONG la so hanh phuc";
    return 0;
}
bool kt_shp(int n)
{
    int temp=n, dem1 =0;
    float sum1 =0;
    while(temp!=0)
    {
        sum1 += temp%10;
        dem1++;
        temp = temp/10;
    }
    if(dem1 % 2 != 0)
        return false;
    else
    {
        int sum2=0, dem2=dem1;
        while(n!=0)
        {
           
sum2 += n%10;
            dem2 --;
            n = n/10;
            if(dem2 == dem1/2)
            break;
        }
        if(sum2 == (sum1/2))
            return true;
        else
            return false;
    }
}
