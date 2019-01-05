#include<stdio.h>
int main(){
	int a[10],max,min;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=a[0],min=a[0];
	for(int i=0;i<10;i++){
		max=max>a[i]?max:a[i];
		min=min>a[i]?a[i]:min;
	}
	printf("%d\n",max);
	printf("%d\n",min);
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
