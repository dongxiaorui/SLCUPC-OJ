#include<stdio.h>
int main(){
	int n;
	char s[30];
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(s);
		printf("%c%c%c%c-%c%c-%c%c\n",s[6],s[7],s[8],s[9],s[10],s[11],s[12],s[13]);
	}
	return 0;
}
