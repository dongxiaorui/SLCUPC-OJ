#include<stdio.h>
int isSushu(int n){
	for(int i=2;i<=n/2;i++)
		if(n%i==0) return 0;
	return 1;
}
int main()
{ 
	int n;
	while(scanf("%d",&n)&&n!=0){
		if(n%2==1) printf("%d is odd number!\n",n);
		else{
			for(int i=2;i<=n/2;i++)
				if(isSushu(i)&&isSushu(n-i)){
					printf("%d=%d+%d\n",n,i,n-i);
					break;
				} 
		}
	}
	return 0;
}
