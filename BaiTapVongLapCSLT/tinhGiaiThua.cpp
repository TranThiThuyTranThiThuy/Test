#include<iostream>
using namespace std;
int main()
{
    int a;
    long gt = 1;
    cout << "Nhap so can tinh giai thua: ";
    cin >> a;
    if (a>=0)
    {
        for(int i = 1; i <= a; i++) 
        {
            gt = gt * i;
        }
        cout << "giai thua cua "  << a << " là " << gt << endl;
    }
    else cout <<"khong ton tai giai thua";
    return 0; 
}
