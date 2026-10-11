#include <stdio.h>

int main()
{
    if (1)
    {
        printf("this if is executed!\n");
    }

    if (12345.9)
    {
        printf("this if is executed!\n");
    }

    if ('c')
    {
        printf("this if is executed!\n");
    }

    // this if can't ever executed
    if (0)
    {
        printf("this if is not executed!\n");
    }

    return 0;
}