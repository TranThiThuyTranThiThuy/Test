#include <iostream>
#include<math.h>
using namespace std;
const int MAX = 100;

int minInArray(int arr[][MAX], int index, int collumn) {
	int s = arr[index][0];
	for (int i = 0; i < collumn; i++)
	{
		if (s > arr[index][i]) {
			s = arr[index][i];
		}
	}
	return s;
}


int maxInArray(int arr[][MAX], int index, int collumn ) {
	int s = arr[index][0];
	for (int i = 0; i < collumn; i++)
	{
		if (s < arr[index][i]) {
			s = arr[index][i];
		}
	}
	return s;
}

void copyArrFromSource(int arrSrc[][MAX], int arrDes[][MAX], int row, int collumn) {
	for (int i = 0; i < collumn; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arrDes[i][j] = arrSrc[i][j];
		}
	}
}

void print2DArray(int arr[][MAX], int row, int collumn) {
	for (int i = 0; i < collumn; i++)
	{
		for (int j = 0; j < row; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "---------------------" << std::endl;
}

bool isPrime(int n) {
	if (n == 0 || n == 1) {
		return 0;
	}
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int oddEvenRowController(int arr[][MAX], int index, int collumn) {
	if (index % 2 == 1)
		return minInArray(arr, index, collumn);
	return maxInArray(arr, index, collumn);
}
int countPrime2D(int arr[][MAX], int index, int jndex, int row, int collumn) {
	int total = 0;
	if (isPrime(arr[index][jndex])) {
		total -= 1;
	}
	for (int i = 0; i < row; i++)
	{
		if (isPrime(arr[i][jndex]))
			total += 1;
	}

	for (int j = 0; j < collumn; j++)
	{
		if (isPrime(arr[index][j]))
			total += 1;
	}
	return total;
};

void wierd2D1(int arrSrc[][MAX], int arrDes[][MAX], int row, int collumn) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < collumn; j++)
		{
			arrDes[i][j] = arrSrc[i][j] * oddEvenRowController(arrSrc, i, collumn);
		}
	}
}
void prime2DArray(int arrSrc[][MAX], int arrDes[][MAX], int row, int collumn) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < collumn; j++)
		{
			arrDes[i][j] = countPrime2D(arrSrc, i, j, row, collumn);
		}
	}
}
int main() {
	int a[3][MAX] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[3][MAX];
	int c[3][MAX];
	wierd2D1(a, b, 3, 3);
	prime2DArray(a, c, 3, 3);

	print2DArray(a, 3, 3);
	print2DArray(b, 3, 3);
	print2DArray(c, 3, 3);
}
