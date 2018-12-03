#include<stdio.h>
int main(){
	int s[10],max;
	for(int i=0;i<10;i++)
		scanf("%d",&s[i]);
	max=s[0];
	for(int i=1;i<10;i++)
		max=s[i]>max?s[i]:max;
	for(int i=0;i<10;i++)
		if(s[i]==max)
			printf("%d\n",i);
	return 0;
}
