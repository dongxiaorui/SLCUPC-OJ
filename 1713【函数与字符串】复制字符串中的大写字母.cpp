void NewString(char a[20],char b[20])
{
	int i,j=0;
	for(i=0;i<strlen(a);i++)
	    if(a[i]>='A'&&a[i]<='Z')
	    	b[j++]=a[i];
    b[j]='\0';
}
