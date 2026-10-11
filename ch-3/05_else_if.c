#include <stdio.h>

int main()
{
    int age = 41;

    if (age > 60)
    {
        printf("you can drive but you are a senior citizen\n");
    }
    else if (age > 40)
    {
        printf("you can drive and you are elder\n");
    }
    else if (age >= 18)
    {
        printf("you can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }

    return 0;
}