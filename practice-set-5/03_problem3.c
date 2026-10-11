#include <stdio.h>

float force(float m)
{
    return m * 9.8;
}

int main()
{
    float m, F;

    printf("Enter mass in kg: ");
    scanf("%f", &m);

    F = force(m);

    printf("Force of attraction = %.2f N\n", F);

    return 0;
}
