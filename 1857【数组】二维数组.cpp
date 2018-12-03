#include<stdio.h>
int main(){
	int n,s[4][4];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&s[i][j]);
	scanf("%d",&n);
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			if(i>=j) s[i][j]*=n;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%4d",s[i][j]);
		printf("\n");
	}
	return 0;
}
