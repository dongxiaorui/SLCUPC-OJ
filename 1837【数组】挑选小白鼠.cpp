#include<stdio.h>
int main(){
	int n,s[10],max[2],min[2];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
	max[0]=s[0];
	min[0]=s[0];
	for(int i=1;i<n;i++){
		if(s[i]>max[0]){
			max[0]=s[i];
			max[1]=i;
		}
		if(s[i]<min[0]){
			min[0]=s[i];
			min[1]=i;
		}
	}
	printf("%d %d",max[1]+1,min[1]+1);
	return 0;
}
