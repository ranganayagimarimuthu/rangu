#include<stdio.h>
void main()
{
int a,b;
printf("enter the a and b values");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("the swapped values are %d  %d",a,b);
}
