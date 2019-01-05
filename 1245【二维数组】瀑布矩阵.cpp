#include <stdio.h>
int main(){
	int n,p[10][10],count=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			p[j][i]=count++; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
	return 0;
}
