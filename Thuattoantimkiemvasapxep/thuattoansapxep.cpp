#include<iostream>
using namespace std;
void PrintArray(int *A, int n)
{
	for(int i = 0; i < n; i++)
		cout << A[i] << " ";
		cout <<endl;
}
void BubbleSort(int A[], int n)    // noi bot
{
    for (int i = 0; i < n - 1; i++){
        for (int j = n-1; j > i; j--){        
            if (A[j] < A[j - 1])
            {
                swap(A[j], A[j - 1]); 
         //    PrintArray(A,n);
           }
    }
}   
            }
void swap(int &a,int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void SelectionSort(int A[], int n)    // sap xep chon truc tiep
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i; 
        for (int j = i + 1; j < n; j++)
            if (A[j] < A[min]) 
                min = j; 
        if (min != i) 
            swap(A[i], A[min]);
    }
}
void InsertionSort(int A[], int n)    // sap  xep chen truc tiep
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i]; 
        pos = i - 1;
        while (pos >= 0 && A[pos] > x)
        {
            A[pos + 1] = A[pos];
            pos--;
        }
        A[pos + 1] = x;
    }
}
void quick_sort(int A[], int left, int right)    // sap xep nhanh 
{   
    int  n; 
    if (left >= right)
        return ;
    int pivot = A[(left + right) / 2]; 
    int i = left, j = right;
    while (i < j)
    {
        while (A[i] < pivot) 
            i++;
        while (A[j] > pivot) 
            j--;
        if (i <= j)
        {
            if (i < j) 
            swap(A[i], A[j]);
			 PrintArray(A,n);  
            i++;
            j--;
        }
      
    }
    if (left < j)
            quick_sort(A, left, j);
    if (i < right)
            quick_sort(A, i, right);
}
void QuickSort(int A[], int n)
{
    quick_sort(A, 0, n - 1);
}
int ShellSort(int arr[], int n)
{
    for (int m = n/2; m > 0; m /= 2)
    {
        for (int i = m; i < n; i += 1)
        {
            int temp = arr[i];
            int j;           
            for (j = i; j >= m && arr[j - m] > temp; j -= m)
                arr[j] = arr[j - m];
            arr[j] = temp;
        }
    }
}
void heap(int arr[], int n, int i)
{
    int largest = i; 
  // left = 2*i + 1
    int l = 2 * i + 1;
  // right = 2*i + 2
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
         heap(arr, n, largest);
    }
   PrintArray(arr,n); 
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heap(arr, n, i); 
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heap(arr, i, 0);
           }
} 
int main ()
{
	int A[] = {7,9,10,6,15,16,12 };
	int n = sizeof(A) / sizeof(A[0]) ;
	cout<<"sap xep theo bubblesort ( noi bot ) la : " <<endl; 
	BubbleSort(A,n); PrintArray(A,n);
	cout<<"sap xep chon truc tiep la : " <<endl; 
	SelectionSort( A, n);PrintArray(A,n);
	cout<<"sap xep chen truc tiep la : "<<endl; 
	InsertionSort( A, n);PrintArray(A,n);
	cout<<"sap xep nhanh la : " <<endl; 
	QuickSort( A,n);PrintArray(A,n);
	cout<<"sap xep theo shellsort la : "<<endl; 
	ShellSort(A,n); PrintArray(A,n); 
	cout<<"sap xep theo heapsort la : "<<endl;  
	heapSort(A,n); PrintArray(A,n);  
	return 0;
}
