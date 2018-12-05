#include <stdio.h>
int GetMax(int a,int b){
	return a>b?a:b; 
}
int main()
{
    int num1,num2,max;
    scanf("%d%d",&num1,&num2);
    max = GetMax(num1,num2);
    printf("MAX=%d\n",max);
    return 0;
}
