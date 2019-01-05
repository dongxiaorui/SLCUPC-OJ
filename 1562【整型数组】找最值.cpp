main()
{
int a[10];
int i,max,min;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
max=min=a[0];
for(i=0;i<10;i++)
{
 if(max<a[i]) max=a[i];
 if(min>a[i]) min=a[i];
}
printf("%d\n",max);
printf("%d\n",min);
for(i=0;i<10;i++)
printf("%d ",a[i]);
}