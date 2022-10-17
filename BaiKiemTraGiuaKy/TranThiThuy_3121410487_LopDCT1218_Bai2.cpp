#include<iostream>
using namespace std;
int KT(int thang)
{
 int nam;
 switch(thang)
 {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: return 31;break;
    case 4: 
    case 6:
    case 9:
    case 11: return 30;break;
    case 2:
          if(nam%400==0 || (nam%4==0 && nam%100!=0))
                return 29;
          else  return 28;
                break;
    default: return 0;
 }
}
void Ngaytieptheo(int ngay , int thang, int nam)
{
  int ntiep = ngay,ttiep = thang, namtiep = nam;
    if(nam>0&&thang>0&&thang<=12&&ngay>0&&ngay<=KT(thang))
    {
      ntiep = ngay +1;
         if(thang==12&&ngay==KT(thang))
           {
                ntiep = 1;
                ttiep = 1;
         	    namtiep = nam+1;
		   }
		 else if (thang!=12&&ngay==KT(thang)) 
		   {
		   	    ntiep = 1;
		   	    ttiep = thang +1;
		   }
		 else if (thang==2)
		   {
		   	   if (nam%400==0 || (nam%4==0 && nam%100!=0))
		   	    {
		   	    if (ngay==29)
		   	      {
		   	      	ntiep = 1;
		   	      	ttiep = thang +1;
				  }
			    }
			   else if (ngay==28)
			      {
			       	ntiep = 1;
			       	ttiep = thang +1;
				  } 
			}
    }
         cout<<"Ngay tiep theo cua "<<ngay<<"/"<<thang<<"/"<<nam<<" la: "<<ntiep<<"/"<<ttiep<<"/"<<namtiep<<endl;
}
void Ngaytruocdo(int ngay, int thang, int nam)
{
	int ntruoc = ngay, ttruoc = thang, namtruoc = nam;
	  if (nam>0&&thang>0&&thang<=12&&ngay>0&&ngay<=KT(thang))
	  {
	    ntruoc= ngay -1;
		if (thang !=1&&ngay==1)
		 { 
		    if (thang == 3)
			  {
				if (nam%400==0 || (nam%4==0 && nam%100!=0))
					{
					ntruoc = 29;
					ttruoc = thang -1;
			     	}
			    else 
			    	{
					ntruoc = 28;
					ttruoc = thang -1;
			    	}
		      }
		   	if (KT(thang)==30)
			  {
				    ntruoc = 31;
					ttruoc = thang -1;	
			  }
		    if (KT(thang)==31&&thang!=3)
		   	  {
		    		ntruoc = 30;
		    		ttruoc = thang -1;
			  }
		 }
		else if (thang ==1 && ngay ==1)
		      {
		            ntruoc = 31;
		    	    ttruoc = 12;
		    	    namtruoc = nam -1;
			  }
    }
	cout <<"Ngay truoc do cua "<<ngay<<"/"<<thang<<"/"<<nam<<" la :"<<ntruoc<<"/"<<ttruoc<<"/"<<namtruoc<<endl;
}
int main()
{
    int ngay,thang,nam;
    do 
    {
    cout<<"Nhap vao lan luot ngay, thang, nam :";
    cin>>ngay>>thang>>nam;
    }
    while(ngay<0 || thang <1 || thang >12 || ngay>KT(thang) || nam <0 );
          KT(thang);
          Ngaytieptheo(ngay,thang,nam);
          Ngaytruocdo(ngay,thang,nam);
          return 0;
}
