#include<stdio.h>
int main()
{
int m,c,sum=0;;
printf("enter the number");
scanf("%d",&c);
while(c!=0)
{
m=c%10;
c=c/10;
sum=sum+m;
}
printf("%d",sum);
return 0;
}
