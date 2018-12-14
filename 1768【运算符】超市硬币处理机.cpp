#include<stdio.h>
int main(){
	int y,j,f,sum;
	scanf("%d%d%d",&y,&j,&f);
	sum=y*100+j*50+f*10; 
	printf("Dollars=%d\nChange=%d",sum/100,sum%100);
	return 0;
} 
