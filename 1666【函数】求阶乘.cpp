int num(int n){
	if(n==1) return 1;
	else return num(n-1)*n;
}
