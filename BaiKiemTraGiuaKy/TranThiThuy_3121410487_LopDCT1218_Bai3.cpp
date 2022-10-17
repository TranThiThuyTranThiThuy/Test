#include<iostream>
using namespace std;
int KTsnt(int N)                 
{
	int i , dem=0;
	if (N<2)
	return 0;
	for (i=1;i<=N;i++)
	if (N%i==0)
	   dem++;
	if (dem==2)
	return 1;
	return 0;
}
int SNTNNlonhonN(int N) 
{   
    for (int m=N+1;;m++)
    {
			if (KTsnt(m)==1)
			return m;
	}
}
int DEMsole(int N)
{
	int m = 0, dem=0;
	while(N!=0)
	{
		m = N%10;
		if (m%2!=0)
		dem++;
		N = N/10;
	}
	return dem;
}
int DEMsochan(int N)
{
	int i,dem=0;
	for (i=1;i<=N;i++)
	{
		if (i%2==0)
		dem++;
	}
	return dem;
}
void SNTganN(int N)
{
	int i,j,tem;
    for ( i = N+1;;i++)
	{
		if (KTsnt(i)== 1)
		   {
		   	break;
		   }
	}
	for ( j = N-1;j>1;j--)
	{
		if (KTsnt(j)== 1)
		   {
		   	break;
		   }
	}
		if ((i-N)==(N-j))
		{   
		   if (j>1)
		      cout <<"SNT gan "<<N<<" nhat co the la :"<<i<<" hoac "<<j<<endl;
	       else 
	          cout<<"SNT gan "<<N<<" nhat la :"<<i<<endl;
	}
		else 
		{
		   int tem = i-N > N-j ? j:i;
	       cout<<"SNT gan "<<N<<" nhat la :"<<tem<<endl;
		}
}
int SNTthuN(int N)
{	
	int i, dem= 0 ; 
	for (i = 1;; i++)
	{
		if (KTsnt(i) == 1)
			dem++ ;
		if (dem == N)
			break; 
	}
	return i ;
}
int main ()
{
	int N;
	do
	{
	cout<<"nhap so nguyen duong N :";
	cin>>N;
    }
    while (N<=0);
	cout<<"Cau a) :"<<endl;
	if (KTsnt(N)==1)
	  { 
	    cout<<"N = "<<N<<" la so nguyen to"<<endl;
	  }
	else
      {
		cout<<"N = "<<N<<" khong phai la so nguyen to"<<endl;
      }
    cout<<"Cau b) :"<<endl;
    int SNT = SNTNNlonhonN(N);
    cout<<"So nguyen to nho nhat va lon hon "<<N<<" la :"<<SNT<<endl;
    cout<<"Cau c) :"<<endl;
    int demSL = DEMsole(N);
    cout<<"So luong cac so le cua "<<N<<" la :"<<demSL<<endl;
    cout<<"Cau d) :"<<endl;
    int demSC = DEMsochan(N);
    cout<<"So luong cac so chan nho hon hoac bang "<<N<<" la :"<<demSC<<endl;
    cout<<"Cau e) :"<<endl;
    SNTganN(N);
    cout<<"Cau f) :"<<endl;
    int SNTthu = SNTthuN(N);
    cout<<"So nguyen to thu "<<N<<" trong day SNT la :"<<SNTthu;
    return 0;
}

