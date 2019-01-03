#include<stdio.h> 
int main()
{
    int a[1000],m,n,i,k=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        if(a[i]<=n)
            k++;
    }
    printf("%d",k);
    return 0;
}
