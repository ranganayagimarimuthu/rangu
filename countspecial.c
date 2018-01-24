#include<stdio.h>
#include<string.h>
int main()
{
	int s=0,cnt=0,a;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if((str[i]==' ')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='10'))
		{
		    s++;
		}
		else
		{
		  cnt++;
		}
	}
	printf("The no of  special character in the line is %d\n",cnt);
  return 0;
}
