#include <stdio.h>
#include <math.h>
double fun(double a){
	return ((double)((int)(a*100+0.5))/100);
} 
int main( )
{   double  a;
    scanf("%lf", &a);
    printf("%f\n",fun(a));
    return 0;
} 
