#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		int count=1;
		for(int j=i+1;s[j]==s[i];j++)
			count++;
		if(count==1) printf("%c",s[i]);
		else{
			printf("%d%c",count,s[i]);
			i=i+count-1;
		}
	}
	return 0;
} 
