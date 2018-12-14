#include<stdio.h>
int main(){
	int x,y,n1,n2;
	scanf("%d%d%d%d",&x,&y,&n1,&n2);
	printf("%.2f",1.0*(n1*x+n2*y)/(n1+n2));
	return 0;
} 
