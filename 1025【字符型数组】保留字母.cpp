#include<stdio.h>
int main(){
	int i;
	char a[100];
	gets(a);
	for(i=0;i<strlen(a);i++)
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
			printf("%c",a[i]);
	return 0;
}
