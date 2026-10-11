#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i
    printf("the address of i is %p\n", &i);
    printf("the address of i is %p\n", j);

    printf("the value at address j is %d\n", *(&i));

    return 0;
}