int Fun(char x[20],char y[20]){
	for(int i=0;x[i]!='\0';i++){
		if(x[i]-y[i]!=0)
			return x[i]-y[i];
	}
	return 0;
}
