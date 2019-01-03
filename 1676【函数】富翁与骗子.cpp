#include<stdio.h>
int Deposit(int day){
	int sum=1,tmp=1;
	for(int i=2;i<=day;i++)
		tmp*=2,sum+=tmp;
	return sum;
}
int Withdraw(int day,int amount){
	return amount*day;
}
int main()
 {
     int n,i,day;
     int amount,dpt,wd;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         scanf("%d",&amount);
         for(day=1;;day++)
         {
             dpt=Deposit(day);
             wd=Withdraw(day,amount);
             if(dpt-wd>0)
             {
                 printf("%d天骗取现金%d元\n",day,dpt-wd);
                 break;
             }
         }
     }
     return 0;
 } 
