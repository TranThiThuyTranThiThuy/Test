#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int A[6]={1,2,3,4,5,6};
	int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
    srand(time(NULL));
    for (int i=1; i<=6000000; i++){
        int r = rand()%6+1;
        if (r == A[0])
            d1++;
        if (r == A[1])
            d2++;
        if (r == A[2])
            d3++;
        if (r == A[3])
            d4++;
        if (r == A[4])
            d5++;
        if (r == A[5])
            d6++;
    }
    cout << "so lan xuat hien so 1 la: " << d1 <<endl;
    cout << "so lan xuat hien so 2 la: " << d2 <<endl;
    cout << "so lan xuat hien so 3 la: " << d3 <<endl;
    cout << "so lan xuat hien so 4 la: " << d4 <<endl;
    cout << "so lan xuat hien so 5 la: " << d5 <<endl;
    cout << "so lan xuat hien so 6 la: " << d6 <<endl;
    cout<<d1+d2+d3+d4+d5+d6<<" lan thay xuc xac "; 
}
