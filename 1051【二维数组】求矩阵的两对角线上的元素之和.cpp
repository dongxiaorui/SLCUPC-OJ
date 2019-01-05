#include <stdio.h>
int main(){
	int n,a[11][11],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(i==j||i+j==n-1) sum=sum+a[i][j];
		}
	printf("%d",sum);
}
 
