#include<stdio.h>
int main()
{
	int n;
	double a[100],h,sum=0,aver;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	scanf("%lf",&h);
	aver=sum/n;
	if(aver<h) printf("555");
	else printf("666");
}
