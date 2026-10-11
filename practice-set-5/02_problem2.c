#include <stdio.h>

float fahrenheit(float c);

float fahrenheit(float c) {
    return (9.0 / 5.0) * c + 32;
}

int main() {
    printf("Fahrenheit = %f\n", fahrenheit(25));
    return 0;
}
