#include<stdio.h>
int main()
{
	int h,m,h1,m1,h2,m2;
	printf("\n enter the hour and min values");
	scanf("%d %d",&h1,&m1);
	printf("\n enter the hour and min values");
	scanf("%d %d",&h2,&m2);
	if(m1<m2)
	{
		m1=m1+60;
		h1=h1-1;
	}
	h=h1-h2;
	m=m1-m2;
	printf("%d %d",h,m);
	return 0;
	
}
