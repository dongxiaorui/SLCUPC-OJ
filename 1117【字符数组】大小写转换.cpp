#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    while(gets(s)!=NULL){
    	for(int i=0;i<strlen(s);i++)
        	if(s[i]>='a'&s[i]<='z')
				s[i]=s[i]-'a'+'A';
        puts(s);
    }
    return 0;
}
