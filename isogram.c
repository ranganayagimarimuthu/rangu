include<stdio.h>
int main()
{
char s[50];
int i,f=0;
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
{
f=0;
break;
}
if(f==1)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
}
}
