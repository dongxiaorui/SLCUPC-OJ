int num(int n,int k,int a){
    if(n==1) return a;
    else return num(n-1,k,a)+k;
}
