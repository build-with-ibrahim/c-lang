#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ibrahim.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num); 

    fclose(ptr);

    printf("the value of num is %d\n", num); 

    return 0;
}