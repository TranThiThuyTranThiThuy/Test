#include<iostream>
#include<math.h> 
using namespace std;
int KTSo(int n)
{
	int i = (int)sqrt(n);
	if ((i * i) == n)
		return 1;
	return 0;
}
void KhoangAB(int A, int B)
{
	int m = A;
	for (m; m <= B; m++)
	{

		if (KTSo(m))
			cout << m << " ";
	}
}
int main()
{
	int n, A, B;
	cout << "nhap khoang (A,B)" << endl;
	cin >> A >> B;
	KhoangAB(A, B);
}
