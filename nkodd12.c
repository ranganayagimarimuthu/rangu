#include<stdio.h>
int main()
{
int a[10],n,k,i;
printf("enter the two values");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
if(i>k && i%2==1)
{
printf("%d",i);
}
}
return 0;
}
