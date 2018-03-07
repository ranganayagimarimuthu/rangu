#include<stdio.h>
int main()
{
char s[10];
intn len,i;
printf("enter the character");
scanf("%s",s);
len=strlen(s);
for(i=0;i<1;i++)
{
if(i==0)
{
s[i]=toupper(s[i]);
printf("%c",s[i]);
}
else
{
printf("%c",s[i]);
}
}
return 0;
}
