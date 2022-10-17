#include<iostream>
#include<math.h>
using namespace std;
void cau17A(int n) {
    int i = 0, temp = n;
    if(temp/10==0)
        cout<<n<<" KHONG la so DOI XUNG"<<endl;
    else{
        do
        {
            i = i * 10 + temp % 10;
            temp /= 10;
        } while (temp != 0);
        if (i == n)
            cout << n << " la so DOI XUNG" << endl;
        else
            cout << n << " KHONG la so DOI XUNG" << endl;
void cau17B(int n) 
{
    int i =(int) sqrt(n);
    if(i * i == n)
		 cout << n << " la so CHINH PHUONG" << endl;
    else
		cout << n << " KHONG la so CHINH PHUONG" << endl;
}
void cau17C(int n) { 
    bool IsPrime = true; 
    if (n<2)
        IsPrime = false;
    else{
        for(int i=2; i<n; i++)
        {
            if(n%i==0){
                IsPrime = false;
                break;
            }
        }
    if (IsPrime == true) 
        cout<<n <<" la so NGUYEN TO"<<endl;
    else
        cout<<n <<" KHONG la so NGUYEN TO"<<endl;
    }
}
void cau17D(int n) {
    int max = 0, min = n % 10, i = 0, temp = n;                     
    do
    {
        i = temp % 10;
        if (i > max)
            max = i;
        if (i < min)
            min = i;
        temp /= 10;
    } while (temp != 0);
    cout << n << " co chu so LON nhat la: " << max << endl;
    cout << n << " co chu so NHO nhat la: " << min << endl;
}
int main()


