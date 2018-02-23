#include<stdio.h>
int main()
{
int n,n1,i,g;
printf("enter the 2 numbers");
scanf("%d%d",&n,&n1);
for(i=1;i<=n&&i<=n1;i++)
{
if(n%i==0&&n1%i==0)
{
g=i;
printf("%d%d%d",n,n1,g);
}
return 0;
}
}
