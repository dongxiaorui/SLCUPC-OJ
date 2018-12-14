#include<stdio.h>
int main(){
	double v,s,a;
	scanf("%lf%lf",&v,&s);
	v=v/3.6;
	a=1.0/2*v*v/s;
	printf("%.2lf",a);
	return 0;
} 
