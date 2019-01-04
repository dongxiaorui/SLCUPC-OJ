int Sort(char a[3][10]){
	char tmp[10];
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(strcmp(a[j],a[i])<0){
				strcpy(tmp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],tmp);
			}
		}
	}
	return 0;
}
