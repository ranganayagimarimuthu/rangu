#include<stdio.h>
int main()
{
int sum=0,n,i,a[4];
printf("enter the number");
scanf("%d",&n);
for(i=0;a[i]!='\0';i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d"sum);
return 0;
}
