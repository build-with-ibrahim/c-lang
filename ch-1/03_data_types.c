#include <stdio.h>

int main()
{
    // both work same
    // int a
    // a = 1;
    int a = 1;

    // float: decimal
    float b = 1.4f;
    // for float use %f

    // char: type one character
    char c = 'I';
    // for char use %c

    printf("the value of a is %d\n", a);
    printf("the value of b is %f\n", b);
    printf("the value of c is %c\n", c);

    // \n use for forcing next code to perform in next line

    return 0;
}