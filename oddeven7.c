#include<stdio.h>
int main ()
{
int r,s,t;
printf("enter the numbers");
scanf("%d%d",&r,&s);
t=r+s;
printf("%d\n",t);
if(t%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
