#include "stdio.h"
int Gcd(int n,int m){
	if(m<=n&&n%m==0) return m;
	else if(n<m) return Gcd(m,n);
	else Gcd(m,n%m);
} 
int main()  
{  
    int n,m;  
    scanf("%d%d",&n,&m);  
    printf("%d\n",Gcd(n,m));  
    return 0;
} 
