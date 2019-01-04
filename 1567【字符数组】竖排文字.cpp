#include<stdio.h>
#include<string.h>
int main()
{
	char a[101][101];
	int num,n,m;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%d%d",&n,&m);
		getchar();
		for(int j=0;j<n;j++)
    		gets(a[j]);
		for(int j=0;j<m;j++){
		    for(int k=0;k<n;k++)
		        printf("%c",a[k][j]);
		    printf("\n");
		}
	}
	return 0;
}
