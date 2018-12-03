#include<stdio.h>
int main(){
	int n,m;
	m=0;
	double pingjun,y,a[11];
	y=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
    	scanf("%lf",&a[i]);
    for(int i=1;i<=n;i++){
    	y+=a[i];
    }
    pingjun=(double)y/n;
    for(int i=1;i<=n;i++){
    	if(a[i]<pingjun){
        	m=m+1;
        }
    }
    printf("average=%.2lf\n%d",pingjun,m);
    return 0;
}

