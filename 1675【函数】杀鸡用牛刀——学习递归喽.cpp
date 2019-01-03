int GetSum(int n,int m){
	if(n==m) return n;
	else return GetSum(n,m-1)+m;
}
