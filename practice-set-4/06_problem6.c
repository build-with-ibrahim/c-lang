
#include <stdio.h>

int main()
{
    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("Sum using for = %d\n", sum);

    sum = 0;
    i = 1;

    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);

    printf("Sum using do-while = %d\n", sum);

    return 0;
}
