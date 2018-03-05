#include<stdio.h>
int main()
{
int l,b,h,area,vol;
printf("enter the values");
scanf("%d%d%d",&l,&b,&h);
vol=l*b*h;
area=2*l*b+2*b*h+2*h*l;
printf("%d%d\n",vol,area);
return 0;
}
