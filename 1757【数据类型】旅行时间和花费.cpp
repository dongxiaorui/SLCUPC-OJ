#include<stdio.h>
int main(){
	double s,v,p,c;
	scanf("%lf%lf%lf%lf",&s,&v,&p,&c);
	printf("%.1lf %.1lf",s/v,s/p*c);
	return 0;
} 
