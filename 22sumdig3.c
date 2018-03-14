#include<stdio.h>
int main()
{
int num,s=0,r,sqr;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
sqr=r*r;
s=s+sqr;
num=num/10;
}
printf("%d",s);
return 0;
}
