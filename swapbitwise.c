#include<stdio.h>
int main()
{
int i=20;
int k=40;
printf("the value are %d %d",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("after swapping numbers %d %d",i,k);
return 0;
}
