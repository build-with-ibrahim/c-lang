#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{
    int n, result;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a non-negative number.\n");
    }
    else
    {
        result = sum(n);
        printf("Sum = %d\n", result);
    }

    return 0;
}
