#include<iostream>
using namespace std;
#define max 10000
struct toaDo
{
    int td, hd;
};
void nhaptoado(toaDo a[], int &n){
    cout<<"Ban can kiem tra bao nhieu diem: "; 
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap toa do diem a["<<i<<"]: ";  
		cin>>a[i].hd>>a[i].td;
    }
}
int Ktra(toaDo a){
    float yd=-1.0*(3*a.hd+1)/4, m;
    if(a.td>yd)     m=0;
    if(a.td<yd)     m=1;
    if(a.td==yd)    m=2;
    return m;
}
void intoado(toaDo a[], int n){
    int over_=0, under_=0, match_=0;
    for (int i = 0; i < n; i++)
    {
        float v=Ktra(a[i]);
        if(v==0)    over_++;
        if(v==1)    under_++;
        if(v==2)    match_++;
    }
    cout<<"So diem nam tren la: "<<over_<<endl;
    cout<<"So diem nam duoi la: "<<under_<<endl;
    cout<<"So diem nam trung la: "<<match_<<endl;
}
int main(){
    toaDo a[max];
    int n;
    nhaptoado(a, n);
    intoado(a, n);
}
