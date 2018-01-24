#include<stdio.h>
int main()
{
int s[10],i,max;
for(i=0;i<10;i++)
{
scanf("%d\n",&s[i]);
}
for(i=0;i<10;i++)
{
if(s[i]>max)
{
max=s[i];
}
}
printf("%d",max);
return 0;
}
