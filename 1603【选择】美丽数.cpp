#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%3==0&&n%5==0)
		printf("Y");
	else printf("N"); 
	return 0;
}
