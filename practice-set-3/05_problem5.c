// ASCII TABLE
#include <stdio.h>

int main(){
    char ch = 'a';
    printf("the character is %c\n", ch);
    printf("the value of character is %d\n", ch);

    // 97, 122
    if (ch >= 97 && ch<=122)
    {
        printf("the character is lowercase\n");
    } else {
        printf("this character is lowercase\n");
    }
    
    return 0;
}