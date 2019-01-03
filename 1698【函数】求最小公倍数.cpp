int Icm(int m,int n)
{
	int ma=m>n?m:n;
	int mi=m>n?n:m;
	int i;
	for(i=ma;i%mi!=0;i+=ma);
	return i;
}
