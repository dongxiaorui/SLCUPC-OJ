#include<stdio.h>
int main(){
	int n,s[1001],tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<n/2;i++){
		tmp=s[i],s[i]=s[n-1-i],s[n-1-i]=tmp;
	}
	for(int i=0;i<n;i++)
		printf("%d ",s[i]);
	return 0;
}
