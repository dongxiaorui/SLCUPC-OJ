int Gcd(int n,int m){
    if(m<=n&&n%m==0) return m;
    else if(n<m) return Gcd(m,n);
	else return Gcd(m,n%m);
}
