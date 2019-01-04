#include<stdio.h> 
#include<string.h>
int main(){
	int T,result;
	char s[31];
	scanf("%d\n",&T);
	for(int t=0;t<T;t++){
		result=0;
		gets(s);
		for(int i=0;i<strlen(s);i++)
			result+=s[i]-96;
		printf("%d\n",result);
	}
	return 0;
}
