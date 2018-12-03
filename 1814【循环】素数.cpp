#include<stdio.h>
int main(){
	int m,n,isSushu;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		//求i是否是素数
		isSushu=1;
		for(int j=2;j<=i/2;j++)
			if(i%j==0) {
				isSushu=0;
				break;
			}
		if(isSushu==1)
			printf("%d ",i); 
	}
	return 0;
}
