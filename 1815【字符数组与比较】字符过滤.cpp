#include<stdio.h>
#include<string.h>
//本题判题用例似乎有问题，代码应该无误 
int isHave(char a[100],char b){
	for(int i=0;a[i]!='\0';i++)
		if(a[i]==b) return 1;
	return 0;
}
int main(){
	char s[100],result[100]="\0";
	gets(s);
	for(int i=0,j=0;i<strlen(s);i++)
		if(!isHave(result,s[i])){
			result[j++]=s[i];
			result[j]='\0';
		}
	puts(result);
	/*
	for(int i=0;i<strlen(result);i++)
		printf("%c",result[i]);
	*/
	return 0;
}
