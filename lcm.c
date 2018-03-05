#include<stdio.h>
int main()
{
int x,y;
int a,b,r,gcd,lcm;
printf("enter the 2 number\n");
scanf("%d%d",&a,&b);
x=a;
y=b;
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
lcm=(x*y)/gcd;
printf("%d",lcm);
return 0;
}
