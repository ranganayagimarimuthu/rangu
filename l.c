#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enetr the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater");
}
elseif(b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
return 0;
}
