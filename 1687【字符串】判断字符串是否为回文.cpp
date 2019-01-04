#include<stdio.h>
#include<string.h> 
int main()
{
    char a[300];
    gets(a);
    for(int i=0,j=strlen(a)-1;i<j;i++,j--)
    	if(a[i]!=a[j]){
    		printf("no");
    		return 0;
		}
    printf("yes");
    return 0;
}