#include<iostream>
using namespace std ;
int main ()
{
int n = 50;
int *p; 
p = &n ;
cout << n <<endl;
cout << &n <<endl;
cout << p <<endl;
cout << *p <<endl;
cout << *(&n) << endl;
cout << &p <<endl;
}

