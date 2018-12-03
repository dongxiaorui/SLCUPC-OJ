#include<stdio.h>
int main(){
	int a[11],n,isCharu=0;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		if(n<a[i]){
			for(int j=10;j>i;j--)
				a[j]=a[j-1];
			a[i]=n;
			isCharu=1;
			break;
		}	
	}
	if(!isCharu) a[10]=n;
	for(int i=0;i<=10;i++)
		printf("%d ",a[i]);
	return 0;
}
