#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ibrahim.txt", "r");
    if (ptr == NULL)
    {
        printf("the file does not exist sorry!\n");
    }
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num);
    return 0;
}