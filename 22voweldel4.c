#include<stdio.h>
char s[100],t[100];
int i,j=0;
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]='\0';i++)
{
if(s[i]==0)
{
t[j]=s[i];
j++;
}
}
t[j]='\0';
strcpy(s,t);
printf("after remove vowels:%s\n",s);
return 0;
}
int (char c)
{
switch(c)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'E':
case 'o':
case 'O':
case 'u':
case 'U':
return 1;
default:
return 0;
}
}
