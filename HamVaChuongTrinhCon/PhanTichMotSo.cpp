#include <iostream>
using namespace std;
int phantich(int n);
 
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    phantich(n);

  return 0;  
}
int phantich(int n)
{
    int dem;
   for(int i = 2; i <=n; i++){
        dem = 0;
        while(n % i == 0){
            dem++;
            n /= i;
        }
        if(dem!=0){
            cout << i;
            if(dem > 1)
			cout << "^" << dem;
            if(n > i){
                cout << " * ";
            }
        }
    } 
}
