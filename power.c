#include <stdio.h>
int main()
{
    int base, e;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an e: ");
    scanf("%d", &e);

    while (ex != 0)
    {
        result *= base;
        --e;
    }

    printf("Answer = %lld", result);

    return 0;
}
