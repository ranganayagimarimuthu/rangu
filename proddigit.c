#include<stdio.h>
int main()
{
int r=0,rs=1,n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rs=rs*r;
n=n/10;
}
printf("%d",rs);
return 0;
}
