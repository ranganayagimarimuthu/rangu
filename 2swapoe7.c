#include<stdio.h>
int main()
{
char str[50];
int i,t,n;
printf("enter the string");
scanf("%s",str);
n=strlen(str);
if(n%2==0)
{
for(i=0;i<n;i=i+2)
{
t=str[i];
str[i]=str[i+1];
str[i+1]=t;
}
printf("%s",str);
}
else
{
for(i=0;i<n-1;i+2)
{
t=str[i];
str[i]=str[i+1];
}
str[i+1]=t;
printf("%s",str);
}
return 0;
}
