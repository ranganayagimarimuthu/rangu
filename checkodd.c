#include<stdio.h>
int main()
{
	int k,l;
	char a[5]="23456";
	l=strlen(a);
	for(k=0;k<l;k++)
	{
		if(a[k]%2!=0)
		{
			printf("%c",a[k]);
		}
	return 0;
	}
}
