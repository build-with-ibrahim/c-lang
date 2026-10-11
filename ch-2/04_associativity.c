
#include <stdio.h>

int main() {
    int a = 3;
    int b = 6;
    int c = 9;

    // Operator Priority (Highest to Lowest):
    // 1. ()       - Parentheses
    // 2. *, /, %  - Multiplication, Division, Modulus
    // 3. +, -     - Addition, Subtraction
    // 4. =        - Assignment

    // Same priority operators (* and /) are evaluated left to right.
    printf("the value is %d\n", a * b / c + 5);

    // First: 3 * b
    // Then: divide by 2
    // Then: multiply by c
    // Then: 5 * a
    // Finally: add both results
    printf("the value is %d\n", 3 * b / 2 * c + 5 * a);

    return 0;
}
