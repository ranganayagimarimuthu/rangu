#include<stdio.h>
int main()
{
int a,b,r,gcd;
printf("enter the 2 number");
scanf("%d%D",&a,&b);
do
{
r=a%b;
if(r==0)
break;
a=b;
b=r;
}
while(r!=0);
gcd=b;
printf("%d",gcd);
return 0;
}
