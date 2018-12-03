#include<stdio.h>
int main(){
	long long int n,y,m,d,days;
	scanf("%lld",&n);
	days=n/86400;
	y=2011+days/360;
	m=1+days%360/30;
	d=1+days%360%30; 
	printf("%lld %lld %lld",y,m,d);
	return 0;
} 
