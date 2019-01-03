void NewString(char a[20],char b[20]){
	int i,j=0;
	for(i=0;i<strlen(a);i++)
	    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	    	b[j++]=a[i];
	b[j]='\0';
}
