#include<stdio.h> 
#include<string.h> 
int main(){
	char a[50];
	int i,f; 
	gets(a);
	for(i=0;i<strlen(a);i++)
		printf("%c",a[i]);
	for(i=strlen(a)-1;i>=0;i--)  
		printf("%c",a[i]);
	return 0;
} 
