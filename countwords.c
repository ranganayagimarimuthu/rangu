#include<stdio.h>
int main()
{
char a[100]="hello world";
int j,cnt=0;
for(j=0;a[j]='\0';j++)
{
if(a[j]==' ')
cnt++;
}
printf("no of words are %d",cnt+1);
return 0;
}
