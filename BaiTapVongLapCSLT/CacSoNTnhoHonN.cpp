#include <iostream>
#include <math.h>
using namespace std;
void SNT(int N)
{
    int i = 2, j, kt;
    while (i < N) 
    {
        kt = 1;
        if (i != 0 && i != 1) 
        {
            j = 2;
            while (j <= i / 2) 
            {
                if (i % j == 0) 
                {
                    kt = 0;
                    break;
                }
                j++;
            }
        }
        else {
            kt = 0;
        }
        if (kt == 1) {
            cout << i << " ";
        }
        i++;
    }
}
int main()
{
    int N;
    cout << "Nhap so N: ";
    cin >> N;
    cout << "Tat ca cac so nguyen to tu 1 den " << N << " la: ";
    SNT(N);
    return 0;
}
