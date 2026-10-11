#include <stdio.h>

// function prototype
int sum(int, int);

// function defination
int sum(int x, int y){
    printf("the sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 5;
    int b = 10;
    int a2 = 56;
    int b2 = 90;

    sum(a,b); // function call
    sum(a2, b2); // function call
    sum(12,15); // function call
}