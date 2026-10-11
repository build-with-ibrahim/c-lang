#include <stdio.h>

int main() {
    char name[50];

    // 1. fgets() - input lena
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // 2. puts() - string print karna
    puts("Your name is:");
    puts(name);

    // 3. printf() - string print karna
    printf("Hello, %s", name);

    return 0;
}
