#include<stdio.h>
int main()
{
int i,n,k,a[10];
printf("enter the n and k values");
scanf("%d%d",&n,&k);
printf("enter the elements");
for(i=0;i<5;i++)
{
scanf("%d",a[i]);
}
if(a[i]==k)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
