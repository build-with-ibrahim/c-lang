#include <stdio.h>

int main()
{
    FILE *fptr = fopen("maaz.txt", "r");

    if (fptr == NULL) {
        return 1;
    }

    int ch;

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c\n", ch);
    }

    fclose(fptr);
    return 0;
}