#include<stdio.h> 
int main(){
	int num,n,sum,max,min; 
	while(scanf("%d",&num)!=EOF){
		sum=0,max=0,min=9999;
		for(int i=0;i<num;i++){
			scanf("%d",&n);
			sum+=n;
			max=max>n?max:n;
			min=min>n?n:min;
		}
		printf("%.2lf\n",1.0*(sum-max-min)/(num-2));
	}
	return 0; 
}
