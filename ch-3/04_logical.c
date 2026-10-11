#include <stdio.h>

int main(){
    int a=1;
    int b=1;

    printf("the value of a and b is %d\n", a&&b); // both have to be true
    printf("the value of a or b is %d\n", a||b); // both can be true and atlast one statment have to be true

    // logical not operator
    printf("the value of not(a) is %d\n", !a);

    if (a&&b)
    {
        printf("both are true\n");
    }
    // is same as writing ....
    // nested 
    if(a){
        if(b){
            printf("both are true\n");
        }
    }
    
}