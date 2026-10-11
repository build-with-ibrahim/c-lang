#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("maaz.txt", "w");

    if (fptr == NULL) {
        return 1;
    }

    fputc('A', fptr);

    fclose(fptr);
    return 0;
}