#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a)
		printf("non-triangle.");
	else if(a==b&&b==c)
		printf("equilateral triangle.");
	else if(a==b||a==c||b==c)
		printf("isoceles triangle.");
	else printf("triangle.");
	return 0;
}
