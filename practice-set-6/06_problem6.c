#include <stdio.h>

int main(void)
{
    int i = 25;
    int *p = &i;
    int **q = &p;

    printf("Value of i = %d\n", i);
    printf("Value using pointer = %d\n", *p);
    printf("Value using pointer to pointer = %d\n", **q);

    return 0;
}
