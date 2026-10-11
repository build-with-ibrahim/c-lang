#include <stdio.h>

void show(int x)
{
    printf("Address of x = %p\n", (void *)&x);
}

int main(void)
{
    int i = 10;

    printf("Address of i = %p\n", (void *)&i);

    show(i);

    return 0;
}
