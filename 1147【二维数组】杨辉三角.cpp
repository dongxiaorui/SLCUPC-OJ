#include<stdio.h>
int main(){
	int n,a[31][31];
	while(scanf("%d",&n)!=EOF){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==1) a[i][j]=1;
				else if (j>i) { a[i][j]=0; break; }
				else a[i][j]=a[i-1][j-1]+a[i-1][j];
				if(a[i][j]!=0) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}	
	return 0;
}
