#include<stdio.h>
int main()
{
  int n,r,s,i,cnt=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    s=s+r;
    n=n/10;
    cnt++;
  }
  printf("the total no digits is %d",cnt);
  return 0;
}
