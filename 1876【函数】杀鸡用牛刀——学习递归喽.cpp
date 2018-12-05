#include <stdio.h>
int GetSum(int n,int m){
	if(n==m) return n;
	else return GetSum(n,m-1)+m;	
}
int main()  
{  
    int m,n,s;  
    scanf("%d%d",&n,&m);  
    s=GetSum(n,m);  
    printf("%d\n",s);
    return 0; 
} 
