#include<stdio.h>
int main()
{
char s[10];
int a,i;
printf("enter the char");
scanf("%s",s);
a=strlen(s);
for(i=0;i<a;i++)
{
if(i==0)
{
s[i]=toupper(s[i]);
printf("%c",s[i])
}
else
{
printf("%c",s[i]);
}
}
return 0;
}
