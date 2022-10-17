#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cout << "nhap so tu nhien n" << endl;
    cin >> n ;
    a = n / 1000;
    b = ((n % 1000 / 100));
    c = (n % 100 /10);
    d = (n % 10);
    cout << "chu so hang nghin " << a << endl;
    cout << "chu so hang tram " << b <<endl;
    cout << "chu so hang chuc " << c <<endl;
    cout << "chu so hang don vi " << d << endl ;
    return 0;
}
