#include<stdio.h>
int main(){
	int n;
	int weishu;
	int isZishoushu=1;
	scanf("%d",&n);
	int tmp=n;
	for(weishu=1;;tmp=tmp/10,weishu++)
		if(tmp/10==0) break;
	int result=n*n-n;
	//printf("%d %d ",weishu,result);
	for(int i=1;i<=weishu;i++){
		if(result%10!=0) {
			isZishoushu=0;
			break;
		}
		result=result/10;
	}
	if(isZishoushu==1)
		printf("Yes");
	else printf("No"); 
	return 0;
}
