#include <iostream> 
using namespace std; 
void PrintArray(int *p, int n)
{
	for(int i = 0; i < n; i++)
		cout << p[i] << " ";
		cout <<endl;
}
void Mx1Mx2(int *p, int n){
	int m1 = p[0], m2 = p[0];
	for(int i = 0; i < n; i++){ 
		if(p[i] > m1)
			m1 = p[i];
	}
	for(int i = 0; i < n - 1; i++){
		if(p[i] <= m1 && p[i] > p[i + 1])
			m2 = p[i];
	}
	cout << "so lon 1: " << m1 << endl;
	cout << "so lon 2: " << m2 << endl; 
}
void Sort(int *p, int n){
	int flag = 0;
	while(flag == 0){
		flag = 1;
		for(int i = 0; i < n - 1; i++){
			if(p[i] > p[i + 1]){    // ham sap xep  
				int temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
				flag = 0;
			}
		}
	}
	cout << "mang da xep: " << endl;
	for(int i = 0; i < n; i++)
		cout << p[i] << " ";
} 
int main ()
{
	int p, n;
	cout <<" nhap so phan tu n : ";
	cin>>n;
	PrintArray(&p,n);
	Mx1Mx2(&p,n);
	Sort(&p,n);
	return 0;
}
