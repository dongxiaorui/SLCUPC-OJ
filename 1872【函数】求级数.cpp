 #include <stdio.h>
float fun(double x,int n){
	double result=1,tmp1=1,tmp2=1;
	for(int i=1;i<=n;i++){
		tmp1*=x;
		tmp2*=i;
		result+=tmp1/tmp2;
	}
	return (float)result;
} 
int main()
{
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    printf("%f\n",fun(x,n));
    return 0;
} 
