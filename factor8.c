#include<stdio.h>
int main()
{
int n,k;
printf("enter the number");
scanf("%d",&n);
for(k=1;k<=n;k++)
{
if(n%k==0)
{
printf("%d\n",k);
}
return 0;
}
