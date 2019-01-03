int min(int x, int y){
	int ma=x>y?x:y;
	int mi=x>y?y:x;
	int i;
	for(i=ma;i%mi!=0;i+=ma);
	return i;
}
int max(int x, int y){
    return x/(min(x,y)/y);
}
 
