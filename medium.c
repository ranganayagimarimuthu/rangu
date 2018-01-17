#include<stdio.h>
int main()
{
int array[100],med,size,c,loc=2;
printf("enter the number of elements in array \n");
scanf("%d",&size);
printf("enter %d integers\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
med=array[0];
for(c=1;c<size;c++)
{
if(array[c]>=med)
{
med=array[c];
loc=c-1;
}
}
