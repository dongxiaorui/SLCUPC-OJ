#include <stdio.h>
int main(){
	int n,a[20][20],b[20][20],c[20][20]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}	
	return 0;
}
