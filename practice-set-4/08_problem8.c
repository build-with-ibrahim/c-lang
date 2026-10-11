#include <stdio.h>

int main()
{
    int n;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (n > 20)
    {
        printf("Please enter a number from 0 to 20.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial = %llu\n", fact);
    }

    return 0;
}
