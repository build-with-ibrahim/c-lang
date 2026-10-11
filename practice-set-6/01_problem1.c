#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p = &i;

    printf("Value of i = %d\n", i);
    printf("Address of i = %p\n", (void *)&i);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
