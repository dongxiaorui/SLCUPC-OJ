#include<stdio.h>
int main(){
	int n,s[10][10];
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		for(int j=0;j<=i;j++)
			if(j==0||i==j) s[i][j]=1;
	for(int i=0;i<=n;i++)
		for(int j=1;j<i;j++)
			s[i][j]=s[i-1][j-1]+s[i-1][j];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++)
			printf("%3d",s[i][j]);
		printf("\n");
	}
	return 0;
}
