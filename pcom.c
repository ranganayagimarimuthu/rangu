#include<stdio.h>
int main()
{
int n,i,a=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2);i++)
{
if(n%i==0)
{
a=1;
break;
}
if(a==0)
{
printf("prime");
}
else
{
printf("composite");
}
}
return 0;
}
