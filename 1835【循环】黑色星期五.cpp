#include<stdio.h>
int main(){
	int year,xingqi;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day_num=365;
	scanf("%d%d",&year,&xingqi);
	if(year%4==0&&year%100!=0||year%400==0){
		day_num=366;
		month[1]=29;
	};
	for(int i=1;i<=day_num;i++){
		xingqi=xingqi%7;
		int days=i;
		int j;
		if(xingqi==5){
			for(j=0;j<12;j++){
				days-=month[j];
				if(days<0) break;
			}			
		}
		if(days+month[j]==13)
			printf("%d/%d/%d\n",year,j+1,days+month[j]);
		xingqi++;
	}
	
	return 0;
}
