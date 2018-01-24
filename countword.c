#include<stdio.h>
#include<string.h>
main()
{
int i,c=0;
char s[20];
printf("enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=' ')
count++;
}
printf("no of words is %d\n",c);
}
