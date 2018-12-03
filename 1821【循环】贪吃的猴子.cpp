#include<stdio.h>
int main(){
	int n;
	long long int total=1;
	scanf("%d",&n);
	for(int i=n-1;i>0;i--)
		total=(total+i)*2;
	printf("The monkey got %lld peachs in first day.\n",total); 
	return 0;
}

