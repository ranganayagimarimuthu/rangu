#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the values");
scanf("%d%D%d",&a,&b,&c);
d=a*b%c;
printf("%d",d);
return 0;
}
