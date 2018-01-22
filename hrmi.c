#include<stdio.h>
int main()
{
int hour,min=30,n,min1;
hour=min/60;
min1=hour*60;
n=min-min1;
printf("%d\n",hour);
printf("%d\n",n);
return 0;
}
