#include<stdio.h>
int main()
{
int a[5]={'2','1','3'};
int i,temp;
for(i=0;i<=a[5];i++)
{
if(i<=1)
temp=i;
i=a[i];
printf("sorted array for 2,1,3 "%d",a[i]);
}
return 0;
}
