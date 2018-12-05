#include <stdio.h>
int MergeData(int num1,int num2){
	int a,b,c,d,newnum;
	a=num1/10;
	b=num1%10;
	c=num2/10;
	d=num2%10;
	newnum=a*10+b*1000+c+d*100;
	return newnum;
}
int main()
{
    int num1,num2,newnum;
    scanf("%d%d",&num1,&num2);
    newnum = MergeData(num1,num2);
    printf("newnum=%d\n",newnum);
    return 0;
} 
