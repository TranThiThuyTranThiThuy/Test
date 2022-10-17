#include<iostream>
#include <math.h>
using namespace std;
int KTsnt(int n)                 
{
	int i , dem=0;
	if (n<2)
	return 0;
	for (i=1;i<=n;i++)
	if (n%i==0)
	   dem++;
	if (dem==2)
	return 1;
	return 0;
}
void KTra(int n)
{
   int x=0, sophantu=0,y=0;
   int a[1000];
   for(int i=2;i<=n;i++)
    {  
       if (KTsnt(i)==1) 
       {
	     sophantu++;
         a[x]=i;
         x++;
	   }
    }
   for(int i=0;i<sophantu-2;i++)
     {  
	 for(int j=i+1;j<sophantu-1;j++)
         {  
		for(int k=j+1;k<sophantu;k++)
            { 
			  if(pow(a[i],2)+pow(a[j],2)==a[k])
                {
				  cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                  y++;
				}
            }
         }
     }
   if(y==0) cout<<"-1";
}
int main()
{   
    int n;
    cout<<"nhap n: ";
    cin>>n;
    KTra(n);
    return 0;
}
