#include <stdio.h>

int main(){
    int a =5;
    int *ptr = &a;
    printf("the addres of a is %u", &a);
    printf("the addres of a is %u", ptr);
    ptr++;
    printf("the addres of a is %u", ptr);
}