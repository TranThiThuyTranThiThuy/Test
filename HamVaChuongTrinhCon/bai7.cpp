#include <iostream>
using namespace std;
bool KT_SNT(int n)
{
    if(n<2)
        return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool KT_SDX(int n)
{
	int i = 0, temp = n;
	do
	{
		i = i * 10 + n % 10;
		n = n / 10;
	} while (n != 0);
	if (i == temp)
		return true;
	else
		return false;
}
int main()
{
	for (int i = 10000; i <= 99999; i++)
	{
		if (KT_SNT(i) == true && KT_SDX(i) == true)
			cout << i << " ";
	}
	return 0;
}

