#include<stdio.h>
int main(){
	int i,j,n;
	char s[1000];
	scanf("%d\n",&n);
	gets(s);
	for(i=0,j=n-1;i<j;i++,j--)
		if(s[i]!=s[j]){
			printf("NO");
			return 0;
		}
	printf("YES");
	return 0;
}
