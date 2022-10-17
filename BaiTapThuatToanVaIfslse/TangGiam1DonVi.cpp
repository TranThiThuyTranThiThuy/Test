#include <iostream>
using namespace std;
int main()
{
    int x, y,z;
    x=5;
    y=5;
    x=++x;
    y=--y;
    z=x++ + y--;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"z:"<<z<<endl;
    printf("ok roi do em yeu");
    return 0;
}
