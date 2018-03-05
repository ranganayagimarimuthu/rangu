#include<stdio.h>
int main()
{
	int x,a[10],i;
	printf("enter the number");
	scanf("%d",&x);
	printf("enter the elements");
	for(i=1;i<=x;i++);
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=x;i++);
	{
		if(a[i]>a[i+1])
		{
			printf("%d",++a[i+1]);
		}
	}return 0;
}
