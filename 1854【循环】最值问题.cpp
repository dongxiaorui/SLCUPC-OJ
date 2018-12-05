#include<stdio.h>
int main(){
	int n,tmp,max;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		if(i==0) max=tmp;
		else max=tmp>max?tmp:max;
	}
	printf("the max is %d",max);
	return 0;
}
