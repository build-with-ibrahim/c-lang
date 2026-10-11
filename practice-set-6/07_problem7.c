#include <stdio.h>

void multiply(int x)
{
    x = x * 10;

    printf("Value inside function = %d\n", x);
}

int main(void)
{
    int i = 5;

    printf("Before function call = %d\n", i);

    multiply(i);

    printf("After function call = %d\n", i);

    return 0;
}
