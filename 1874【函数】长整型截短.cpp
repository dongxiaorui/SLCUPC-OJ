#include<stdio.h>
int Fun(int n){
	int result=0;
	int shi=1;
	while(n>0){
		if(n%10%2==0){
			result+=n%10*shi;
			shi*=10;
		}
		n=n/10;	
	}
	return result;
}
int main()
{ 
   int n;
   scanf("%d",&n);
   printf("The result is: %d\n",Fun(n));
   return 0;
}
