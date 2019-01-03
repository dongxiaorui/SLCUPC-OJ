#include<stdio.h>
int main()
{
	int i,s,a[100];
	a[0]=3,a[1]=4,a[2]=5;
	scanf("%d",&s);
	s=s-1;
	for(i=3;i<=s;i++){
		a[i]=a[i-3]+a[i-2]+a[i-1];
	}
	printf("%d\n",a[s]);
	return 0; 
}
 
