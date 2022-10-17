 #include<iostream>
using namespace std;
void PrintArray(int *p, int n)
{
	for(int i = 0; i < n; i++)
		cout << p[i] << " ";
		cout <<endl;
}
int BinarySearch(int A[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (A[mid] == x)
            return mid; 
        if (A[mid] > x)
            right = mid - 1; 
        else if (A[mid] < x)
            left = mid + 1; 
    }
    return -1; 
}
int InterpolationSearch(int A[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right && x >= A[left] && x <= A[right])
    {
        mid = left + (right - left) * (x - A[left]) / (A[right] - A[left]);
        if (A[mid] == x)
            return mid;
        if (A[mid] > x)
            right = mid - 1;
        else if (A[mid] < x)
            left = mid + 1;
    }
    return -1; // Không tim thay x
}
int main ()
{
	int a,n,x;
	cout<<"nhap so phan tu : ";
	cin >>n;
	cout<<"nhap x : ";
	cin>>x;
	PrintArray(&a,n);
	int inter = InterpolationSearch(&a,n,x);
	int bin = BinarySearch(&a,n,x);
	if(bin == -1 && inter == -1)
	{
	   cout<<"khong tim thay x trong mang a "<<endl;
	}
	else 
	{
	   cout<<"vi tri cua x trong mang a theo tim kiem nhi phan la :"<<bin<<endl;
	   cout<<"vi tri cua x torng mang a theo tim kiem noi suy la : "<<inter;
	}
   return 0;
}
