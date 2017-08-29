#include<stdio.h>
#include<conio.h>
 void main()
{
    int n, temp, rem, rev = 0;
 
    printf("Enter an integer \n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", rev);
    if (temp == rev)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}
