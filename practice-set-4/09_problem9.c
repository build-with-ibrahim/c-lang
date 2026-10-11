
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
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
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }

        printf("Factorial = %llu\n", fact);
    }

    return 0;
}
