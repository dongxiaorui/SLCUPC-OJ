#include<stdio.h>
int main(){
	int n,s[20],wei=0,tmp;
	scanf("%d",&n);
	for(int i=0;n>0;i++){
		s[i]=n%10;
		n=n/10;
		wei++;
	}
	for(int i=0;i<wei;i++)
		for(int j=i+1;j<wei;j++)
			if(s[i]<s[j])
				tmp=s[i],s[i]=s[j],s[j]=tmp;
	for(int i=0;i<wei;i++)
		printf("%d",s[i]);	
	return 0;
} 
