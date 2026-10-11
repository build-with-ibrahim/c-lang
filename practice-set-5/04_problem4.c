#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter the position (starting from 0): ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        printf("Fibonacci element = %d\n", fibonacci(n));
    }

    return 0;
}
