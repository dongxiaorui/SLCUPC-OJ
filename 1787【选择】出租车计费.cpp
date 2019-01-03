#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	y=x<3?10:x<=10?2*x+4:3*x-4;
	printf("%d",y);
}
