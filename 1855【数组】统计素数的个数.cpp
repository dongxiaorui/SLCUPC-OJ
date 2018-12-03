#include<stdio.h>
int main(){
	int m,s[100],count=0,isSushu;
	scanf("%d",&m);
	for(int i=2;i<=m;i++){
		//ÅÐ¶ÏiÊÇ·ñÊÇËØÊý
		isSushu=1;
		for(int j=2;j<=i/2;j++)
			if(i%j==0){
				isSushu=0;
				break;
			}
		if(isSushu)
			s[count++]=i; 
	}
	for(int i=0;i<count;i++)
		printf("%4d",s[i]);
	printf("\n%d",count);
	return 0;
}
