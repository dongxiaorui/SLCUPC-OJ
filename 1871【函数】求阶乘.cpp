#include <stdio.h>

double Facto(int n){
	double r=1;
	for(int i=2;i<=n;i++)
		r*=i;
	return r;
}

int main()
{
	int n,i;
	double result = 1;
	scanf("%d",&n);
	if(n<=0){
		printf("Input data error!\n");
	}
	else{
		for(i=1;i<=n; i++){
			result = Facto(i);
			printf("%d!=%.0f\n",i,result);
		}
	}
	return 0;
} 
