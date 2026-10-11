#include <stdio.h>
#include <stdio.h>

typedef struct employee
{
    int code;
    float salary;
} emp;

int main()
{
    typedef int ibrahim;
    ibrahim a = 88;
    printf("the value of a is %d\n", a);

    emp e1;

    e1.code = 56;
    e1.salary = 25000;

    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);

    return 0;
}