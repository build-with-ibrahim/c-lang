#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("maaz.txt", "r");

    if (fptr == NULL) {
        return 1;
    }

    char ch;
    ch = fgetc(fptr);

    printf("%c", ch);

    fclose(fptr);
    return 0;
}