#include<stdio.h>
int main()
{
int a,b,c[10],i;
printf("enter the number");
scanf("%d",&a);
printf("enter the elements");
scanf("%d",&b);
printf("the numbers are");
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<a;i++)
{
if(c[i]==b)
{
printf("%d",c[i]);
break;
}
else
{
printf("%d",b+1);
break;
}
}
return 0;
}
