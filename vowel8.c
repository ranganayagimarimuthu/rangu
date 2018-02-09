#include<stdio.h>
int main()
{
char str[100];
int i,cnt=0;
printf("enter the string");
scanf("%s",&str);
for(i=0;s[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
printf("alphabets present:yes");
cnt++;
}
else
{
printf("others");
}
printf("vowels total %d",cnt);
}
return 0;
}
