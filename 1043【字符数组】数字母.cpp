#include<stdio.h>
int main ()
{   int count=0;
    char a[100];
    gets(a);
    for(int i=0;a[i];i++)
		if((a[i]>='A'&&a[i]<='Z')||a[i]>='a'&&a[i]<='z')
			count++;
    printf("%d",count);
    return 0;
}
