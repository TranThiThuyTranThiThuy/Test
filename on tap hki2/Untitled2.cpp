#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int a[10000];
	int dem = 0;
	srand(time(NULL));
	for(int i=1;i<=200;i++){
	dem++;
    cout<< 1+rand()%10000<<" ";
    if(dem<100&&dem>200)
	break;}
}
