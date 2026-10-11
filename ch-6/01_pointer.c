#include <stdio.h>

int main()
{
    int i = 50;
    int *j = &i; // j is a pointer pointing to i
    int k = 67;
    printf("the address of i is %p\n", &i);
    printf("the address of i is %p\n", j);
    printf("the address of i is %p\n", &k);

    printf("the value at address j is %d\n", *(&i));

    return 0;
}