#include<stdio.h>
int main(){
	int n,zi=2,mu=1,tmp;
	double sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		sum+=1.0*zi/mu;
		tmp=zi;
		zi=zi+mu;
		mu=tmp;
	}
	printf("sum=%16.10f\n",sum);
	return 0;
}
