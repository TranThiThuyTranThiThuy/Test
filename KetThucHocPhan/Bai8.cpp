// Tim loi sai sua lai va cho biet chuc nang ham 
int sum (int n) 
{ 
if (n==0) 
return 0; 
else 
return n+sum(n); 
}
// loi sai : n+ sum(n)
// sua lai : n+ sum (n-1)
// Chuc nang cua ham : Tinh tong tu 1 toi n : S= 1+2+3+.....+n  theo cong thuc truy hoi, tong quat S(n)= S(n-1)+n 
// theo ham tren ta thay S(n)=S(n-1)+n 
// Vay thay vi tinh S(a) ta tinh S(n-1) tro di 
// tuong tu tinh : S(n-2),........S(2),S(1)=1
//ta co : S(n)=S(n-1)+n 
//  Tinh  S(n-1)= S(n-2)+n-1
//        S(n-2) = S(n-3) + n-2 
//        .....................
//        S(2)   = S(1) + 2
//        S(1) = 1 
 
