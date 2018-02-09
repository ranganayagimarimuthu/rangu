include<stdio.h>
int main()
{
int n,i,cnt=0;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n/2;i++)
{
	if(n%i==0)
	{
		cnt=i;
		break;
	}
}
if(cnt==0)
{
	printf("no");
}
else
{
	printf("yes");
}
return 0;
}
