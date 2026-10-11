#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[30];
};

int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 100;

    struct employee ibrahim = {100, 70.00, "ibrahim ahmad"};
    printf("%d %f %s", ibrahim.code, ibrahim.salary, ibrahim.name);

    return 0;
}
