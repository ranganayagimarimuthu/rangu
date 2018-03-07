#include<stdio.h>
int main()
{
int a[20],i,m;
printf("enter the number");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<9;i++)
{
if(a[i]<min)
{
a[i]=min;
}
}
printf("%d",min);
}
