#include<stdio.h>
int main()
{   int h,f,a,b;
    scanf("%d%d",&h,&f);
    a=(4*h-f)/2;
    b=h-a;
    printf("rabbit=%d,chicken=%d\n",b,a);
    return 0;
}
