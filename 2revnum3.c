#include<stdio.h>
int main()
{
int n,fir=0,sec=1,next,c;
printf("enter the number");
scanf("%d",&n);
for(c=0;c<n;c++)
{
if(c<=1)
next=c;
else
{
next=fir+sec;
sec=next;
printf("%d",next);
}
return 0;
}
