#include <stdio.h>
int PrimeJudge(int num){
	for(int i=2;i<=num/2;i++)
		if(num%i==0) return 0;
	return 1;
}
int main()
{
    int num;
    scanf("%d",&num);
    if( PrimeJudge(num) )
    {
        printf("Prime\n");
    }
    else
    {
        printf("Non Prime\n");
    } 
    return 0;
} 
