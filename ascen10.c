#include<stdio.h>
int main()
{
int a[20],i,num=4;
printf("enter the number");
for(i=1;i<=num;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
}
}
return 0;
}
