int Gcd(int n,int m)
{
    if(m==0) return n;
    else return Gcd(m,n%m);
}
 