#include <stdio.h>

void calculate(float a, float b, float *sum, float *average)
{
    *sum = a + b;
    *average = (a + b) / 2.0f;
}

int main(void)
{
    float x = 10.0f;
    float y = 20.0f;
    float sum, average;

    calculate(x, y, &sum, &average);

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
