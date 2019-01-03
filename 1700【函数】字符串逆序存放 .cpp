Invert(char s[])
{
	int i=0,j;
	char c;
	j=strlen(s)-1;
	while(i<j){
		c=s[i],s[i]=s[j],s[j]=c;
		i++;
		j--;
	}
}
