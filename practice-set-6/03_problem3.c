#include <stdio.h>

int main(void)
{
    int i = 5;
    int *p = &i;

    *p = *p * 10;

    printf("New value of i = %d\n", i);

    return 0;
}
