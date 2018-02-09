#include<stdio.h>
int main()
{
	int n,r,s;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the values of r and s");
	scanf("%d%d",&r,&s);
	if(n>s&&n<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
 
	}
	return 0;
	}
