
#include <stdio.h>

void change(int *p)
{
    *p = 100;
}

int main(void)
{
    int i = 10;

    printf("Before function = %d\n", i);

    change(&i);

    printf("After function = %d\n", i);

    return 0;
}
