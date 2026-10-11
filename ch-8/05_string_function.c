
#include <stdio.h>
#include <string.h>

int main()
{
    char a1[30] = "Ibrahim ";
    char st[] = "Ahmad";

    // strlen() - Calculate string length
    printf("Length: %zu\n", strlen(st));

    // strcat() - Concatenate two strings
    strcat(a1, st);
    printf("Concatenated: %s\n", a1);

    // strcpy() - Copy a string
    char target[30];
    strcpy(target, st);
    printf("Copied string: %s\n", target);

    // strcmp
    char a[] = "Harry";
    char b[] = "Harry";
    printf("%d", strcmp(a, b));

    return 0;
}
