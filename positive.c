#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
if(n>0)
{
printf("the no is positive");
}
elseif(n=0)
{
printf("the no is zero");
}
else
{
printf("the no is negative");
}
getch();
}
